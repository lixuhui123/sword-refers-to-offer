//#include <iostream>
//#include <mutex>
// 
//
//using namespace std;
//
//mutex _mutex;
//
////饿汉模式
//class singleton
//{
//public:
//	static singleton * GetInit()
//	{
//		singleton();
//		return &flag;
//	}
//	 
//private:
//	singleton()
//	{
//
//	}
//	singleton(const singleton & a);
//	singleton & operator=(const singleton &a);
//	static singleton flag;
//	int a = 0;
//};
//singleton singleton::flag ;
//
//class lxh
//{
//public:
//	static void link()
//	{
//		//cout << a << endl;
//		cout << d << endl;
//	}
//private:
//	int a;
//	static int d;
//};
//int lxh::d = 2;
////懒汉模式,延时加载
//
//class lazy
//{
//private:
//	volatile static int * _data;
//public:
//	volatile int * get_instance()
//	{
//		if (_data == NULL)
//		{
//			_mutex.lock();
//			if (_data == NULL)
//			{
//				_data = new int;
//			}
//			_mutex.unlock();
//		}
//		return _data;
//	}
//private:
//	lazy();
//	lazy(const lazy & a);
//	lazy operator=(const lazy&);
//
//};
//volatile int* lazy::_data=NULL;
//
//int main()
//{
//	singleton::GetInit();
//	int a = 1;
//	int b = *((char*)&a);
//	cout << b << endl;
//	//void* p = new char[0xfffffffful];
//	//cout << "new:" << p << endl;
//	system("pause"); 
//	return 0;
//}