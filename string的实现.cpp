////Ö÷ÒªÕÆÎÕÉîÇ³¿½±´
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <assert.h>
//using namespace std;
//#pragma warning(disable:4996)
//string & func()
//{
//	static string str{ "123456" };
//	return str;
//}
//class String
//{
//public:
//	String(const char * str="")
//	{
//		if (str == nullptr)
//		{
//			assert(false);
//			return;
//		}
//		m_ptr = new char[strlen(str) + 1];
//		strcpy(m_ptr, str);
//	}
//	String(const String & str):m_ptr(new char[strlen(str.m_ptr)+1])
//	{
//		strcpy(m_ptr, str.m_ptr);
//	}
//	String & operator=(const String &str)
//	{
//		if (this != &str)
//		{
//			char * ptr = new char[strlen(str.m_ptr) + 1];
//			strcpy(ptr, str.m_ptr);
//			delete[] m_ptr;
//			m_ptr = ptr;
//
//		}
//		return *this;
//	}
//private:
//	char * m_ptr;
//};
//int main()
//{
//	string str = func();
//	cout << str;
//	system("pause"); 
//	return 0;
//}