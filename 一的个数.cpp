//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//	int NumberOf1Between1AndN_Solution(int n)
//	{
//		int ret = 0;
//		if (n < 0)
//			return 0;
//		for (int i = 1; i <= n; ++i)
//		{
//			//求一个数的每一位
//			for (int j=i; j; j /= 10)
//			{
//				int tmp = j % 10;
//				if (tmp == 1)
//				{
//					ret++;
//					break;
//				}
//			}
//		}
//		return ret;
//	}
//};
//int main()
//{
//	Solution test;
//
//	cout<<test.NumberOf1Between1AndN_Solution(55);
//	system("pause");
//	return 0;
//}