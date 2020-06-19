//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <numeric>
//#include <unordered_map>
//using namespace std;
//
//class Solution {
//public:
//	/**
//	 *
//	 * @param n int整型 水桶的个数
//	 * @param q int整型 询问的次数
//	 * @param a int整型vector n个水桶中初始水的体积
//	 * @param p int整型vector 每次询问的值
//	 * @return int整型vector
//	 */
//	vector<int> solve(int n, int q, vector<int>& a, vector<int>& p) {
//		// write code here
//		vector<int> ret;
//		vector<int> a2(a);//水桶的水
//		sort(a2.begin(), a2.end());
//
//		for (int i = 0; i < q; ++i) 
//		{
//			int min_t = INT_MAX;
//			int end_index;
//			for (int j = p[i] - 1; j < n; ++j) 
//			{
//				int tmp_t = (p[i] - 1)*a2[j] 
//					- accumulate(a2.begin() + j - p[i] + 1, a2.begin() + j, 0);
//				if (tmp_t < min_t)
//				{
//					min_t = tmp_t;
//					end_index = j;
//				}
//				//cout<<tmp_t<<" "<<end_index<<endl;
//			}
//			ret.push_back(min_t);
//			for (int j = end_index; j >= end_index - p[i] + 1; --j)
//				a2[j] += a2[end_index] - a2[j];
//		}
//
//		return ret;
//	}
//};
//
//int main()
//{
//	unordered_map<int, int> map;
//	map[1] = 10;
//	cout << map[1];
//	system("pause"); 
//	return 0;
//}