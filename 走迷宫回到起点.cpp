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
//	 * �ܻص�1�ŵ㷵�� Yes�����򷵻� No
//	 * @param param int����vector param[0] Ϊ n��param[1] Ϊ m
//	 * @param edge Point��vector Point.x , Point.y �ֱ�Ϊһ���ߵ�������
//	 * @return string�ַ���
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