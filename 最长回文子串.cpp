//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//string dealstr(const string & str, int i, int j)
//{
//	while (i >= 0 && j < str.length() && str[i] == str[j])
//	{
//		i--;
//		j++;
//	}
//	string tmp = str.substr(i + 1, j - i - 1);
//	return tmp;
//}
//string longeststr(const string & str)
//{
//	string anx;
//	for (int i = 0; i < str.size(); ++i)
//	{
//		string s1 = dealstr(str, i, i);
//		string s2 = dealstr(str, i, i + 1);
//		anx = anx.size() > s1.size() ? anx : s1;
//		anx = anx.size() > s2.size() ? anx : s2;
//	}
//	return anx;
//}
//int main()
//{
//	string str("123321");
//	cout << longeststr(str);
//	system("pause"); 
//	return 0;
//}