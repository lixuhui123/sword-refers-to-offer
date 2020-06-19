//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool judge(vector<int> a, vector<int> b)
//{
//	if (a[1] < b[1])
//		return true;
//	else
//		return false;
//}
//class Solution {
//public:
//	int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//		int len = intervals.size();
//		sort(intervals.begin(), intervals.end(), judge);
//		vector<vector<int>>::iterator it;
//		for (it = intervals.begin(); it != intervals.end(); ++it)
//		{
//			for (auto next = it + 1; next != intervals.end(); )
//			{
//				if ((*it)[1] > (*next)[0])
//				{
//					next = intervals.erase(next);
//				}
//				else
//				{
//					next++;
//				}
//			}
//		}
//
//		return len - intervals.size();
//
//	}
//};
//
//int main()
//{
//	vector<vector<int>> v{ {1,2},{2,3},{3,4},{1,3} };
//	Solution test;
//	test.eraseOverlapIntervals(v);
//	system("pause");
//	return 0;
//}