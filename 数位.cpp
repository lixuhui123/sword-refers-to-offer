//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//class Solution {
//public:
//	/**
//	 *
//	 * @param N int整型
//	 * @return int整型
//	 */
//	int findGreaterNum(int N) {
//		// write code here
//		vector<int> ret;
//		for (; N; N /= 10)
//		{
//			int tmp = N % 10;
//			ret.push_back(tmp);
//		}
//		if (ret.size() < 2)
//		{
//			return -1;
//		}
//		reverse(ret.begin(), ret.end());
//		bool flag = true;
//		for (int i = 0; i < ret.size() - 1; ++i)
//		{
//			if (ret[i] > ret[i + 1])
//			{
//			}
//			else
//			{
//				flag = false;
//			}
//		}
//	    flag = true;
//		for (int i = 0; i < ret.size() - 1; ++i)
//		{
//			if (ret[i] == ret[i + 1])
//			{
//			}
//			else
//			{
//				flag = false;
//			}
//		}
//		if (flag)
//		{
//			return -1;
//		}
//		int i = ret.size() - 1;
//		for (; i>0; --i)
//		{
//			if (ret[i] > ret[i - 1])
//			{
//				int tmp = ret[i];
//				ret[i] = ret[i - 1];
//				ret[i - 1] = tmp;
//				break;
//			}
//
//		}
//		sort(ret.begin() + i, ret.end());
//		int tmp = 0;
//		for (auto e : ret)
//		{
//			tmp = (tmp + e) * 10;
//		}
//		return tmp/10;
//	}
//};
//int main()
//{
//	Solution test;
//	cout<<test.findGreaterNum(111);
//	system("pause"); 
//	return 0;
//}