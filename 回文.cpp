//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
////判断局部回文
//bool huiwen(string &str, int a, int b)
//{
//	string tmp = str.substr(a, b - a + 1);
//	string ret = str.substr(a, b - a + 1);
//	reverse(tmp.begin(), tmp.end());
//	if (strcmp(tmp.c_str(), ret.c_str()) == 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//vector<int> Find(string str, char s)
//{
//	vector<int> ret;
//	for (int i=0;i<str.size();++i)
//	{
//		if (str[i] == s)
//		{
//			ret.push_back(i);
//		}
//	}
//	return ret;
//}
//string func(string & str)
//{
//	int size = str.size() - 1;
//	if (huiwen(str, 0, size))
//	{
//		return str;
//	}
//	else
//	{
//		vector<int> index = Find(str,str[size]);
//		for (auto &e : index)
//		{
//			if (huiwen(str, e, size))
//			{
//				string tmp = str.substr(0, e);
//				reverse(tmp.begin(), tmp.end());
//				return str + tmp;
//			}
//		}
//		string tmp = str.substr(0, size);
//		reverse(tmp.begin(), tmp.end());
//		return str + tmp;
//		 
//	}
//	return "";
//}
//int main()
//{
//	while (1)
//	{
//		string str;
//		cin >> str;
//		cout << func(str) << endl;
//		//system("pause");
//	 }
//	
//	return 0;
//}