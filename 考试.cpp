//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
//bool func(pair<char,int> a, pair<char, int> b)
//{
//	if (a.second > b.second)
//	{
//		return true;
//	}
//	else if (a.second == b.second)
//	{
//		if (a.first < b.first)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	else
//	{
//		return false;
//	}
//}
//int main()
//{
//	string str;
//	while (getline(cin, str))
//	{
//		unordered_map<char, int> mp;
//		for (auto & e : str)
//		{
//			mp[e]++;
//		}
// 		vector<pair<char, int>> mem;
//		for (auto & e : mp)
//		{
//			if (isdigit(e.first))
//			{
//				mem.push_back(make_pair(e.first, e.second));
//			}
//			else if(isalpha(e.first))
//			{
//				mem.push_back(make_pair(e.first, e.second));
//			}
//			else if (e.first == ' ')
//			{
//				mem.push_back(make_pair(e.first, e.second));
//			}
//		}
//		sort(mem.begin(), mem.end(), func);
//		for (auto &e : mem)
//		{
//			cout << e.first;
//		}
//	}
//	system("pause"); 
//	return 0;
//}