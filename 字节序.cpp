//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//	/*int a = 10;
//	char b[] = "abc";
//
//	union
//	{
//		int i;
//		char a[2];
//	}*p, u;
//	p = &u;
//	p->a[0] = 0x39;
//	p->a[1] = 0x38;
//	cout << p->i;*/
//
//	/*union
//	{
//		int a;
//		unsigned char b;
//
//	}tmp;
//	tmp.a = 1;
//	cout << (int)tmp.b;*/
//
//	/*int a = 1;
//	int b = *((char *)&a);
//	cout << b;*/
//
//
//	/*int a = 10;
//	int b = reinterpret_cast<int> (&a);
//	cout << b;*/
//
//	class A {
//	public:
//		int m_a;
//	};
//
//	class B {
//	public:
//		int m_b;
//	};
//
//	class C : public A, public B {};
//
//	C c;
//	printf("%p, %p, %p", &c, reinterpret_cast<B*>(&c), static_cast <B*>(&c));
//
//	system("pause"); 
//	return 0;
//}