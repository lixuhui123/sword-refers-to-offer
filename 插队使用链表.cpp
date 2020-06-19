//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <list>
//#include <map>
//using namespace std;
//
//class Solution {
//public:
//	/**
//	 * 计算有多少个人最终不在自己原来的位置上
//	 * @param n int整型 队伍总长
//	 * @param cutIn int整型vector 依次会插队到最前方的人的编号
//	 * @return int整型
//	 */
//	int countDislocation(int n, vector<int>& cutIn) {
//		// write code here
//		//map.count(1),返回存在的个数
//		/* 就是利用map去重，这个过程中连带判断位置，并且判断最大元素 */
//		int pos = 1;
//		int m_max = 0;
//		int ret = 0;
//		map<int, int> m;
//		for (int i=cutIn.size()-1;~i;--i)
//		{
//			if (!m.count(cutIn[i]))
//			{
//				//不存在e
//				m[cutIn[i]] = 1;
//				m_max = max(m_max, cutIn[i]);
//				if (cutIn[i] == pos)
//				{
//					ret++;//在正确位置上
//				}
//				++pos;
//			}
//		
//		}
//		return m_max - ret;
//	}
//};
//
//int main()
//{
//	vector<int> v{ 10,4,6,5,9,7,3,3,9,10 };
//	Solution test;
//	cout<<test.countDislocation(10, v);
//	system("pause"); 
//	return 0;
//}