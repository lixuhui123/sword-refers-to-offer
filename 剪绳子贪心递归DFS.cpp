//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//#if 0
//class Solution 
//{
//public:
//	int back_track(int n) {
//		// n <= 4, 表明不分，长度是最大的
//		if (n <= 4) {
//			return n;
//		}
//
//		int ret = 0;
//		for (int i = 1; i < n; ++i) {
//			ret = max(ret, i * back_track(n - i)); 
//		}
//		return ret;
//	}
//	int cutRope(int number) {
//		// number = 2 和 3 时，分 2 段和分 1 段的结果是不一样的，所以需要特判一下
//		if (number == 2) {
//			return 1;
//		}
//		else if (number == 3) {
//			return 2;
//		}
//		return back_track(number);
//	}
//};
//#elif 1
// 
//class Solution {
//public:
//	int back_track(int n, vector<int> &mark) {
//		if (n <= 4) {
//			return n;
//		}
//		// 在方法一的基础上添加
//		if (mark[n] != -1) {
//			return mark[n];
//		}
//
//		int ret = 0;
//		for (int i = 1; i < n; ++i) {
//			ret = max(ret, i * back_track(n - i, mark));
//		}
//		// 添加部分
//		return mark[n] = ret;
//	}
//	int cutRope(int number) {
//		if (number == 2) {
//			return 1;
//		}
//		else if (number == 3) {
//			return 2;
//		}
//		// 添加部分
//		vector<int> mark(number+1, -1);
//		return back_track(number, mark);
//	}
//};
//#endif
//int main()
//{
//	Solution test;
//	cout<<test.cutRope(15);
//	system("pause"); 
//	return 0;
//}