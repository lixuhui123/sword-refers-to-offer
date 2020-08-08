#include <cstdio>
#include <string>
#include <vector>
#include <unistd.h>
#include <fcntl.h>//���������ӿ�
#include <netinet/in.h>//��ַ�ṹ����Ϣ
#include <arpa/inet.h>//�ֽ���ת���ӿ�
#include <sys/socket.h>//�׽��ֽӿ�
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
		//fcntl��ȡ�ļ�������������/�����ļ�������������
		int flag = fcntl(_sockfd, F_GETFL, 0);//��ȡԭ��������
		fcntl(_sockfd, F_SETFL, flag | O_NONBLOCK);//��ԭ�����������ӷ���������
	}
	bool Socket()
	{
		//socket(��ַ���׽������ͣ�Э������
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
	//�󶨵�ַ��Ϣ
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
	//��ʼ����
	bool Listen(int max_con = MAXCONNECT)
	{
		//listen(����˼����׽�����������ͬʱ���������)
		int ret = listen(_sockfd, max_con);
		if (ret < 0)
		{
			perror("listen error");
			return false;
		}
		return true;
	}
	//�ͻ��˷�����������
	bool Connect(const std::string ip, uint16_t port)
	{
		struct sockaddr_in addr;
		Addr(&addr, ip, port);
		//connect(�ͻ����׽���������������˵�ַ��Ϣ����ַ��Ϣ����)
		socklen_t len = sizeof(struct sockaddr_in);
		int ret = connect(_sockfd, (struct sockaddr *)&addr, len);
		if (ret < 0)
		{
			perror("connect error");
			return false;
		}
		return true;
	}
	//��ȡ������
	bool Accept(TcpSocket *sock, std::string *ip=NULL, uint16_t port=NULL)
	{
		//accept(�����׽������������ͻ��˵�ַ��Ϣ����ַ��Ϣ����)�����µĲ������
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
	//��������
	bool Recv(std::string *buf)
	{
		//recv(������������������Ҫ�����ݳ��ȣ�ѡ�����-0Ĭ������)
		while (1)
		{
			char tmp[5] = { 0 };
			size_t ret = recv(_sockfd, tmp, 5, 0);
			if (ret < 0)
			{
				if (errno == EAGAIN)
				{
					//��ʾ�������£���������û������
					return true;
				}
			}
			else if (ret == 0)
			{
				//�����ѶϿ�
				printf("connect break\n");
				return false;
			}
			*buf += tmp;
		}
		return true;
	}
	//��������
	bool Send(const std::string & data)
	{
		//send(�����������ݣ����ݳ��ȣ�ѡ������
		size_t ret = send(_sockfd, data, sizeof(data), 0);
		if (ret < 0)
		{
			perror("send error");
			return false;
		}
		return true;
	}

	//�ر��׽���
	bool Close()
	{
		close(_sockfd);
		_sockfd = -1;
		return true;
	}
private:
	int _sockfd;
};