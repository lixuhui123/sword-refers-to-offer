//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	/**
//	 *
//	 * @param a int整型vector
//	 * @return double浮点型
//	 */
//	double solve(vector<int>& a) {
//		// write code here
//
//		double res = 0;
//		for (int i = 0; i < a.size() - 3; i++)
//		{
//			for (int j = i + 1; j < a.size() - 2; j++)
//			{
//				for (int k = j + 1; k < a.size() - 1; k++) 
//				{
//					for (int l = k + 1; l < a.size(); l++) 
//					{
//						int a1 = a[i], a2 = a[j], a3 = a[k], a4 = a[l];
//						if (a1 < a2 + a3 + a4 && a2 < a1 + a3 + a4 && a3 < a1 + a2 + a4 && a4 < a1 + a2 + a3) {
//							double z = (double)(a1 + a2 + a3 + a4) / 2;
//							res = max(res, sqrt((z - a1)*(z - a2)*(z - a3)*(z - a4)));
//						}
//					}
//				}
//			}
//		}
//		return res;
//	}
//};
//
//int main()
//{ 
//	system("pause"); 
//	return 0;
//}
//
