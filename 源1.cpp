//#include <iostream>
//#include <vector>
//using namespace std;
//
////ʵ��strcpy����
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
//	cout << "����" << endl;
//	//base* ok = base::creatonly();
//	//stackonly b;
//	/*vector<int> v{ 1,2,3,4 };
//	cout <<  sizeof(long long);*/
//	/*v.erase(v.end() - 2, v.end());
//	for (auto e : v)
//		cout << e << " ";*/
//	//����ennoDB �涨varchar���Ȳ�����255���ַ�
//	system("pause"); 
//	return 0;
//}