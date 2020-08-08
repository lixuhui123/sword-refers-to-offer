//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
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
//		int left = 0;
//		int size = A.size();
//		vector<int> ret;
//		vector<int> num;
//		int tmp = 0;
//		while (right < size)
//		{
//			if (A[right] == T)
//			{
//				ret.push_back(1);
//				tmp = 0;
//				num.clear();
//				left = right;
//				right++;
//				continue;
//			}
//			if ((tmp + A[right]) < T)
//			{
//				tmp += A[right];
//				right++;
//				num.push_back(1);
//				continue;
//			}
//			
//			if ((tmp + A[right]) == T)
//			{
//				tmp += A[right];
//				num.push_back(1);
//	
//				ret.push_back(num.size());
//				num.clear();
//				right++;
//				tmp = 0;
//				left = right;
//				continue;
//			}
//			if ((tmp + A[right] > T))
//			{
//				tmp = 0;
//				//right++;
//				num.clear();
//				right = left + 1;
//			}
//		}
//		sort(ret.begin(),ret.end());
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
//int main()
//{
//	vector<int> tmp = { 2,2,2,2,2 };
//	Solution test;
//	cout<<test.minSumOfLengths(tmp, 8);
//	system("pause"); 
//	return 0;
//}