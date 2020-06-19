//#include <iostream>
//#include <vector>
//using namespace std;
//class Solution {
//public:
//	int _max(const vector<int> & tmp, int a, int b)
//	{
//		int ret = 0;
//		for (a; a <= b; ++a)
//		{
//			if (tmp[a] > ret)
//			{
//				ret = tmp[a];
//			}
//		}
//		return ret;
//	}
//	vector<int> maxInWindows(const vector<int>& num, unsigned int size)
//	{
//		int i, j;
//		vector<int> ret;
//		for (i = 0; i < num.size(); ++i)
//		{
//			if (i + size <= num.size())
//			{
//				ret.push_back(_max(num, i, i + size-1));
//				
//			}
//			else
//			{
//				return ret;
//			}
//		}
//		return ret;
//	}
//};
//
//
//
//int main()
//{
//	Solution test;
//	vector<int> t{ 2,3,4,2,6,2,5,1 };
//	test.maxInWindows(t, 3);
//	system("pause"); 
//	return 0;
//}