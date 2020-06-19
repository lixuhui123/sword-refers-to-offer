//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Point {
//	int x;
//	int y;
//	
//};
//
//
//class Solution {
//public:
//	/**
//	 * 能回到1号点返回 Yes，否则返回 No
//	 * @param param int整型vector param[0] 为 n，param[1] 为 m
//	 * @param edge Point类vector Point.x , Point.y 分别为一条边的两个点
//	 * @return string字符串
//	 */
//	string solve(vector<int>& param, vector<Point>& edge) {
//		// write code here
//		vector<int> v(param[1]+1, -1);
//		for (auto &e : edge)
//		{
//			v[e.x] = e.y;
//		}
//		for (int i = 1; i < v.size(); )
//		{
//			if (v[i] == -1)
//			{
//				return "No";
//			}
//			else
//			{
//				i = v[i];
//			}
//			if (v[i] == 1)
//			{
//				return "Yes";
//			}
//		}
//		return "No";
//	}
//};
//int main()
//{
//
//	system("pause");
//	return 0;
//}