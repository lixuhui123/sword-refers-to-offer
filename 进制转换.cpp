////#include <iostream>
////#include <bitset>
////#include <stdio.h>
////using namespace std;
////int main()
////{
////	int x = 100;
////	//cout << bitset<8>(x) << endl;
////	printf("%s\n", bitset<8>(x));
////	//cout << oct  << endl;
////	//cout << hex << x << endl;
////	system("pause");
////	return 0;
////
////}
//
//class Solution {
//public:
//	/**
//	 *
//	 * @param A int整型vector
//	 * @param T int整型
//	 * @return int整型
//	 */
//	int minSumOfLengths(vector<int>& A, int T) {
//		// write code here
//		if (A.size() < 2) {
//			return -1;
//		}
//		int right = 0;
//
//		int size = A.size();
//		vector<int> ret;
//		vector<int> num;
//		int tmp = 0;
//		while (right < size)
//		{
//			if ((tmp + A[right]) < T)
//			{
//				tmp += A[right];
//				right++;
//				num.push_back(1);
//				continue;
//			}
//			if ((tmp + A[right]) == T)
//			{
//				tmp += A[right];
//				num.push_back(1);
//
//				ret.push_back(num.size());
//				num.clear();
//				right++;
//				tmp = 0;
//				continue;
//			}
//			if ((tmp + A[right] > T))
//			{
//				tmp = 0;
//				right++;
//				num.clear();
//			}
//		}
//		sort(ret.begin(), ret.end());
//		if (ret.size() > 1)
//		{
//			return ret[0] + ret[1];
//		}
//		else
//		{
//			return -1;
//		}
//	}
//};