//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//	double Power(double base, int exponent) {
//		if (base == 0.000000000000000)
//		{
//			return 0;
//		}
//		if (exponent == 0)
//		{
//			return 1;
//		}
//		bool ret = 1;
//		if (exponent > 0)
//		{
//			for (int i = 0; i < exponent; ++i)
//			{
//				ret *= base;
//			}
//
//		}
//		else
//		{
//			int size = exponent * (-1);
//			for (int i = 0; i < size; ++i)
//			{
//				ret *= base;
//			}
//			ret = 1.0 / ret;
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	Solution test;
//	cout<<test.Power(2, 3);
//	system("pause");
//	return 0;
//}