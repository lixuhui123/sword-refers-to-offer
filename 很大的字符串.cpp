//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int FirstNotRepeatingChar(string str) 
//	{
//		if (str.size() == 0)
//			return -1;
//		int arr[58] = { 0 };
//		for (auto &e : str)
//		{
//			arr[e - 'A']++;
//		}
//		vector<int> mem;
//		for (int i = 0; i < 26; ++i)
//		{
//			if (arr[i] == 1)
//			{
//				mem.push_back(i);
//			}
//			if (arr[i + 32] == 1)
//			{
//				mem.push_back(i + 32);
//			}
//		}
//		vector<int> ret;
//		for (int i = 0; i < str.size(); ++i)
//		{
//			for (auto e : mem)
//			{
//				if (str[i] == (e + 'A'))
//				{
//					ret.push_back(i);
//				}
//			}
//		}
//		sort(ret.begin(), ret.end());
//		if (ret.size() > 0)
//		{
//			return ret.front();
//		}
//		else
//		{
//			return -1;
//		}
//		//return -1;
//	}
//};
//int main()
//{
//	string tmp = "kYVmIJVzYWPQLtIdKMmvkVSoKtqJANOfCCOfLVJEjjhbnPrDOwKCDeqhts";
//	Solution test;
//	cout<<test.FirstNotRepeatingChar(tmp);
//	system("pause");
//	return 0;
//}