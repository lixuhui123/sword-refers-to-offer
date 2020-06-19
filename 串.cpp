//#include <iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	//std::string str("There are two needles in this haystack with needles.");
//	//std::string str2("needle");
//
//	//// different member versions of find in the same order as above:
//	//std::size_t found = str.find(str2);
//	//if (found != std::string::npos)
//	//	std::cout << "first 'needle' found at: " << found << '\n';
//
//	//found = str.find("needles are small", found + 1, 16);
//	//if (found != std::string::npos)
//	//	std::cout << "second 'needle' found at: " << found << '\n';
//
//	//found = str.find("haystack");
//	//if (found != std::string::npos)
//	//	std::cout << "'haystack' also found at: " << found << '\n';
//
//	//found = str.find('.');
//	//if (found != std::string::npos)
//	//	std::cout << "Period found at: " << found << '\n';
//
//	//// let's replace the first needle:
//	//str.replace(str.find(str2), str2.length(), "preposition");
//	//std::cout << str << '\n';
//
//
//	std::string str = "We think in generalities, but we live in details.";
//	// (quoting Alfred N. Whitehead)
//
//	std::string str2 = str.substr(3, 5);     // "think"
//
//	std::size_t pos = str.find("live");      // position of "live" in str
//
//	std::string str3 = str.substr(pos);     // get from "live" to the end
//
//	std::cout << str2 << ' ' << str3 << '\n';
//
//	system("pause"); 
//	return 0;
//}