//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//	A()
//	{
//		cout << "A" << endl;
//	}
//	
//	virtual ~A()
//	{
//		cout << "~A" << endl;
//	}
//};
//class B:public A
//{
//public:
//	B()
//	{
//		cout << "B" << endl;
//	}
//	~B()
//	{
//		cout << "~B" << endl;
//	}
//};
//
//class C:public B
//{
//public:
//	C()
//	{
//		cout << "C" << endl;
//	}
//	virtual ~C()
//	{
//		cout << "~C" << endl;
//	}
//};
//
//int main()
//{
//	B b;
//	A* a = &b;
//	return 0;
//	//system("pause");
//
//}