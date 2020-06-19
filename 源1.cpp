//#include <iostream>
//#include <vector>
//using namespace std;
//
////实现strcpy函数
////char * _strcpy(char * dest, const char * src)
////{
////	if (src == NULL || dest == NULL)
////	{
////		return NULL;
////	}
////	if (src == dest)
////		return NULL;
////	int i = 0;
////	while (src[i] != '\0')
////	{
////		dest[i] = src[i];
////		++i;
////	}
////	dest[i] = '\0';
////	return dest;
////}
//
//class base
//{
//public:
//	static base* creatonly()
//	{
//		return new base;
//	}
//private: 
//	base()
//	{}
//	base(const base & a);
//};
//
//class stackonly
//{
//public:
//	stackonly()
//	{
//
//	}
//private:
//	void* operator new(size_t size);
//	void operator delete(void *p);
//};
//
//class lxh
//{
//public:
//	lxh()
//	{
//		cout << "lxh"<<endl;
//	}
//};
//
//lxh a;
//
//int main()
//{
//
//	cout << "是吗" << endl;
//	//base* ok = base::creatonly();
//	//stackonly b;
//	/*vector<int> v{ 1,2,3,4 };
//	cout <<  sizeof(long long);*/
//	/*v.erase(v.end() - 2, v.end());
//	for (auto e : v)
//		cout << e << " ";*/
//	//引擎ennoDB 规定varchar长度不超过255个字符
//	system("pause"); 
//	return 0;
//}