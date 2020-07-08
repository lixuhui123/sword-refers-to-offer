//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//class Solution {
//public:
//	vector<int> multiply(const vector<int>& A) {
//		//两端有自己的算法，中间，不乘它自己
//		int size = A.size();
//		vector<int> ret(size, 0);
//		int tmp = 1;
//		for (int i = 1; i < size; ++i)
//		{
//			tmp *= A[i];
//		}
//		ret[0] = tmp;
//		tmp = 1;
//		for (int i = 0; i < size - 1; ++i)
//		{
//			tmp *= A[i];
//		}
//		ret[size - 1] = tmp;
//		for (int i = 1; i < size - 1; ++i)
//		{
//			tmp = 1;
//			for (int j = 0; j < size; ++j)
//			{
//				if(i==j)
//					continue;
//				tmp *= A[j];
//			}
//			ret[i] = tmp;
//		}
//		for (auto & e : ret)
//		{
//			cout << e << " ";
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	Solution test;
//	vector<int> A = { 1,2,3 };
//	test.multiply(A);
//	
//	system("pause"); 
//	return 0;
//}


 