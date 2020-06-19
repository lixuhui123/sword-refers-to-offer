//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<vector<int> > FindContinuousSequence(int sum) {
//		vector<int> m_v(sum, 0);
//		vector<vector<int>> ret;
//		for (int i = 1; i < sum; ++i)
//		{
//			m_v[i] = i;
//		}
//
//
//		int begin = 1;
//		int end = 2;
//		if (sum == 0)
//			return ret;
//		if (sum == 1)
//			return ret;
//		if (sum == 2)
//			return ret;
//		int add = m_v[begin] + m_v[end];
//		while (end < sum && begin < sum)
//		{
//			if (add < sum)
//			{
//				end++;
//				if (end < sum)
//					add += m_v[end];
//				else
//					break;
//			}
//			else if (add > sum)
//			{
//				add -= m_v[begin];
//				++begin;
//			}
//			else
//			{
//				vector<int> tmp;
//				for (int i = begin; i <= end; ++i)
//				{
//					tmp.push_back(i);
//				}
//				ret.push_back(tmp);
//				add -= m_v[begin];
//				begin++;
//				
//			}
//
//		}
//		return ret;
//	}
//};
//int main()
//{
//	Solution test;
//	//test.FindContinuousSequence(3);
//	int d = 10;
//	d >>= 1;
//	cout << (d>>1) ;
//
//
//	system("pause");
//	return 0;
//}