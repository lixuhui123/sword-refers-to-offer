//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	/**
//	 * 返回无重复幂因子的 N进制完美数之和的所有幂因子
//	 * @param R int整型
//	 * @param N int整型 N进制
//	 * @return int整型vector
//	 */
//	vector<int> GetPowerFactor(int R, int N) {
//		// write code here
//		vector<int> m_v;
//		vector<int> ret;
//		vector<int> ok;
//		int one = pow(N, 0);
//		m_v.push_back(one);
//		int i = 1;
//		while (one<R)
//		{
//			one = pow(N, i);
//			m_v.push_back(one);
//			++i;
//		}
//		
//		do 
//		{
//			int begin = 0;
//			int end = 1;
//			if (R == 0)
//				return ret;
//			if (R == 1)
//			{
//				ret.push_back(0);
//				return ret;
//			}
//			int add = m_v[begin] + m_v[end];
//			while (end < i && begin < i)
//			{
//				if (add < R)
//				{
//					end++;
//					if (end < i)
//					{
//						add += m_v[end];
//
//					}
//					else
//					{
//						break;
//					}
//				}
//				else if (add > R)
//				{
//					add -= m_v[begin];
//					++begin;
//				}
//				else
//				{
//					 
//					for (int k = begin; k <= end; ++k)
//					{
//						ret.push_back(m_v[k]);
//					}
//					break;
//
//				}
//
//
//			}
//			if (!ret.empty())
//			{
//				for (auto &e : ret)
//				{
//					int i = -1;
//					for (int j = e; j; j /= N)
//						++i;
//					ok.push_back(i);
//					
//				}
//				break;
//			}
//			else
//			{
//				return ok;
//				break;
//			}
//		} while (next_permutation(m_v.begin(),m_v.end()));
//		return ok;
//	}
//};
//
//int main()
//{
//	Solution test;
//	vector<int> ret;
//
//	ret=test.GetPowerFactor(1, 3);
//	system("pause"); 
//	return 0;
//}