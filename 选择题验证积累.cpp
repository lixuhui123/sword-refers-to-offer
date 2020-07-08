//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//void func(int* a)
//{
//	/*cout << &a[0]<<endl;
//	cout << &a;
//	a[0] = 'a';*/
//	cout << a<<endl;
//	cout << &a[0];
//}
//
//void func1()
//{
//	void func2();
//	func2();
//}
//void func2()
//{
//	cout << "func2" << endl;
//}
//
////class A
////{
////public:
////	virtual void f()
////	{
////		cout << "virtual f" << endl;
////	}
////	void f () const 
////	{
////		cout << "f" << endl;
////	}
////};
////class B :public A
////{
////	void f()
////	{
////		cout << "b" << endl;
////	}
////	
////};
////int main()
////{
////
////	const A a;
////	a.f();
////	/*func1();
////	int a[] = { 1,2,3 };
////	char b[] = "123";
////	func(a);*/
////	//cout << b;
////	/*int x = printf("123 456\n");
////	printf("%d", x);*/
////
////	//float i = 1.1;
////	//char a = 'a';
////	//cout<<(++a);
////	//printf("%f", ++i);
////
////	/*int i = 0;
////	do
////	{
////		break;
////	} while (++i);*/
////
////
////
////	system("pause"); 
////	return 0;
////}
//
//class A
//{
//public:
//	virtual void f()
//	{
//		cout << "A::f()" << endl;
//	}
//	void f() const 
//	{ 
//		cout << "A::f() const" << endl;
//	}
//};
//class B : public  A
//{
//public:
//	void f() {
//		cout << "B::f()" << endl;
//	}
//};
//void g(  A* a)
//{
//	a->f();
//}
//int a(int tab) {
//	int n = tab - 1;
//	n |= n >> 1;
//	n |= n >> 2;
//	n |= n >> 4;
//	n |= n >> 8;
//	n |= n >> 16;
//	return n;
//}
//int main()
//{
//	cout << a(666);
//	system("pause");
//	/*A* a = new B();
//	a->f();
//	g(a);
//	delete a;
//	system("pause");*/
//}
////int main()
////{
////	//A* a = new B();
////	//a->f();
////	//g(a);
////
////
////	//delete a;
////	int i = 1;
////	int j = 9;
////	printf("%d %d %d", (++i),++j, (++i));//整体算完再去拿
////	system("pause");
////	return 0;
////
////}
//
////#include <math.h>
////#include <iostream>
////using namespace std;
////
////class Point
////{
////	friend double Distance(const Point & p1, const Point & p2)    /* ① */
////	{
////		double dx = p1.x_ - p2.x_;
////		double dy = p1.y_ - p2.y_;
////		return(sqrt(dx * dx + dy * dy));
////	}
////
////
////public:
////	Point(int x, int y) : x_(x), y_(y)                        /* ② */
////	{
////	}
////
////
////private:
////	int    x_;
////	int    y_;
////};
////
////
////int main(void)
////{
////	Point  p1(3, 4);
////	Point  p2(6, 9);
////
////	cout << Distance(p1, p2) << endl;                      /* ③ */
////	return(0);
////}
//
////class A
////{
////public:
////	A()
////	{
////		cout << "A" << endl;
////	}
////};
////class B
////{
////public:
////	B()
////	{
////		cout << "B" << endl;
////	}
////};
////class C :public A, public B
////{
////public:
////	C(int tmp):c(tmp)
////	{
////		cout << "C" << endl;
////		cout << c << endl;
////	}
////	A a;
////	B b;
////	int c;
////};
////int main()
////{
////	int tmp = 13;
////	C c(tmp);
////	system("pause");
////	return 0;
////}
//
