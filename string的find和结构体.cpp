//// string::find_last_of
//#include <iostream>       // std::cout
//#include <string>         // std::string
//#include <cstddef>         // std::size_t
//
//void SplitFilename(const std::string& str)
//{
//	std::cout << "Splitting: " << str << '\n';
//	std::size_t found = str.find_last_of("/\\");
//	std::cout << " path: " << str.substr(0, found) << '\n';
//	std::cout << " file: " << str.substr(found + 1) << '\n';
//}
//
//int main()
//{
//	std::string str1("/usr/bin/man");
//	std::string str2("c:\\windows\\winhelp.exe");
//
//	SplitFilename(str1);
//	SplitFilename(str2);
//	system("pause");
//	return 0;
//}
//
//
////// string::find_first_of
////#include <iostream>       // std::cout
////#include <string>         // std::string
////#include <cstddef>        // std::size_t
////
////int main()
////{
////	std::string str("Please, replace the vowels in this sentence by asterisks.");
////	std::size_t found = str.find_first_of("aeiou");
////	while (found != std::string::npos)
////	{
////		str[found] = '*';
////		found = str.find_first_of("aeiou", found + 1);
////	}
//// 
////	std::cout << str << '\n';
////	system("pause");
////	return 0;
////}
//
//
////// string::find
////#include <iostream>       // std::cout
////#include <string>         // std::string
////
////int main()
////{
////	std::string str("There are two needles in this haystack with needles.");
////	std::string str2("needle");
////
////	// different member versions of find in the same order as above:
////	std::size_t found = str.find(str2);
////	if (found != std::string::npos)
////		std::cout << "first 'needle' found at: " << found << '\n';
////
////	found = str.find("needles are small", found + 1, 6);
////	if (found != std::string::npos)
////		std::cout << "second 'needle' found at: " << found << '\n';
////
////	found = str.find("haystack");
////	if (found != std::string::npos)
////		std::cout << "'haystack' also found at: " << found << '\n';
////
////	found = str.find('.');
////	if (found != std::string::npos)
////		std::cout << "Period found at: " << found << '\n';
////
////	// let's replace the first needle:
////	str.replace(str.find(str2), str2.length(), "preposition");
////	std::cout << str << '\n';
////	system("pause");
////	return 0;
////}
////
//
//
//
//
//
////#include <iostream>
////using namespace std;
////struct my
////{
////	int a;
////	void _ok()
////	{
////		cout << "my struct" << endl;
////	}
////};
////int main()
////{
////	my test;
////	test._ok();
////	my * li = new my;
////	li->_ok();
////	system("pause"); 
////	return 0;
////}