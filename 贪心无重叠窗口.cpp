//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
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
//		if (len == 0)
//			return 0;
//		sort(intervals.begin(), intervals.end(), judge);
//		int end = intervals[0][1];
//		int count = 1;
//		for (auto &e : intervals)
//		{
//			int start = e[0];
//			if (start >= end)
//			{
//				count++;
//				end = e[1];
//			}
//		}
//		return len - count;
//	}
//};
//int main()
//{
//	Solution test;
//	vector<vector<int>> tmp{ {1, 2},{2, 3},{3, 4},{1, 3} };
//
//	test.eraseOverlapIntervals(tmp);
//	unsigned long a = 2294967294;
//	int b = 2294967294;
//	cout << a;
//	system("pause"); 
//	return 0;
//}