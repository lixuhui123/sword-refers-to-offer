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
//	 * @param n int���� ˮͰ�ĸ���
//	 * @param q int���� ѯ�ʵĴ���
//	 * @param a int����vector n��ˮͰ�г�ʼˮ�����
//	 * @param p int����vector ÿ��ѯ�ʵ�ֵ
//	 * @return int����vector
//	 */
//	vector<int> solve(int n, int q, vector<int>& a, vector<int>& p) {
//		// write code here
//		vector<int> ret;
//		vector<int> a2(a);//ˮͰ��ˮ
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