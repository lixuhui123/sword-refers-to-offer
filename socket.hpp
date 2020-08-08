#include <cstdio>
#include <string>
#include <vector>
#include <unistd.h>
#include <fcntl.h>//设置阻塞接口
#include <netinet/in.h>//地址结构体信息
#include <arpa/inet.h>//字节序转换接口
#include <sys/socket.h>//套接字接口
#define MAXCONNECT 10
#define CHECK_RET(q) if((q)==false){return -1;}

class TcpSocket
{
public:
	TcpSocket() :_sockfd(-1)
	{}
	int GetFd()
	{
		return _sockfd;
	}
	void SetFd(int fd)
	{
		_sockfd = fd;
	}
	void SetNonBlock()
	{
		//fcntl获取文件描述符的属性/设置文件描述符的属性
		int flag = fcntl(_sockfd, F_GETFL, 0);//获取原来的属性
		fcntl(_sockfd, F_SETFL, flag | O_NONBLOCK);//在原有属性上增加非阻塞属性
	}
	bool Socket()
	{
		//socket(地址域，套接字类型，协议类型
		_sockfd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
		if (_sockfd < 0)
		{
			perror("socket error");
			return false;
		}
		return true;
	}
	void Addr(struct sockaddr_in *addr, const std::string ip, uint16_t port)
	{
		addr->sin_family = AF_INET;
		addr->sin_port = htons(port);
		inet_pton(AF_INET, ip.c_str(), &addr->sin_addr.s_addr);
	}
	//绑定地址信息
	bool Bind(const std::string & ip, uint16_t port)
	{
		struct  sockaddr_in addr;
		Addr(&addr, ip, port);
		socklen_t len = sizeof(struct sockaddr_in);
		int ret = bind(_sockfd, (struct sockaddr *)&addr, len);
		if (ret < 0)
		{
			perror("bind error");
			return false;
		}
		return true;
	}
	//开始监听
	bool Listen(int max_con = MAXCONNECT)
	{
		//listen(服务端监听套接字描述符，同时最大连接数)
		int ret = listen(_sockfd, max_con);
		if (ret < 0)
		{
			perror("listen error");
			return false;
		}
		return true;
	}
	//客户端发起连接请求
	bool Connect(const std::string ip, uint16_t port)
	{
		struct sockaddr_in addr;
		Addr(&addr, ip, port);
		//connect(客户端套接字描述符，服务端地址信息，地址信息长度)
		socklen_t len = sizeof(struct sockaddr_in);
		int ret = connect(_sockfd, (struct sockaddr *)&addr, len);
		if (ret < 0)
		{
			perror("connect error");
			return false;
		}
		return true;
	}
	//获取新连接
	bool Accept(TcpSocket *sock, std::string *ip=NULL, uint16_t port=NULL)
	{
		//accept(监听套接字描述符，客户端地址信息，地址信息长度)返回新的操作句柄
		struct sockaddr_in cliaddr;
		socklen_t len = sizeof(struct sockaddr_in);
		int new_fd = accept(_sockfd, (struct sockaddr *)&cliaddr, &len);
		if(new_fd<0)
		{
			perror("accept error");
			return false;
		}
		sock->_sockfd = new_fd;
		if (ip != NULL)
		{
			*ip = inet_ntoa(cliaddr.sin_addr);
		}
		if (port != NULL)
		{
			*port = ntohs(cliaddr.sin_port);
		}
		return true;
	}
	//接收数据
	bool Recv(std::string *buf)
	{
		//recv(描述符，缓冲区，想要的数据长度，选项参数-0默认阻塞)
		while (1)
		{
			char tmp[5] = { 0 };
			size_t ret = recv(_sockfd, tmp, 5, 0);
			if (ret < 0)
			{
				if (errno == EAGAIN)
				{
					//表示非阻塞下，缓冲区中没有数据
					return true;
				}
			}
			else if (ret == 0)
			{
				//连接已断开
				printf("connect break\n");
				return false;
			}
			*buf += tmp;
		}
		return true;
	}
	//发送数据
	bool Send(const std::string & data)
	{
		//send(描述符，数据，数据长度，选项数据
		size_t ret = send(_sockfd, data, sizeof(data), 0);
		if (ret < 0)
		{
			perror("send error");
			return false;
		}
		return true;
	}

	//关闭套接字
	bool Close()
	{
		close(_sockfd);
		_sockfd = -1;
		return true;
	}
private:
	int _sockfd;
};