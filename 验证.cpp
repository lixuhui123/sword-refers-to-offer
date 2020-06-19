//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//	A() :m_iVal(0) { test(); }
//	virtual void func() { std::cout << m_iVal << " "; }
//	void test() { func(); }
//public:
//	int m_iVal;
//};
//class B : public A
//{
//public:
//	B() { test(); }
//	virtual void func()
//	{
//		++m_iVal;
//		std::cout << m_iVal << " ";
//	}
//};
//int main(int argc, char* argv[])
//{
//	A*p = new B;
//	p->test();
//	return 0;
//}
//
//int main1()
//{
// 
//	//	int c = 0, k;
//	//for (k = 1; k < 3; k++)
//	//	switch (k)
//	//	{
//	//	default: c += k;//switch里面的default也要有break，以前真没注意
//	//	case 2: c++; break;
//	//	case 4: c += 2; break;
//	//	}
//	//cout << c;
//	system("pause"); 
//	return 0;
//}