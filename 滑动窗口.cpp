//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
//#if 0
//int func(vector<int>& v, vector<int>& u)
//{
//	unordered_map<int, int> need, window;
//	for (int i : u)
//		need[i]++;
//	int l = 0, r = 0;
//	int valid = 0;
//	int ans = v.size() + 1;
//	while (r < v.size())
//	{
//		int t = v[r];
//		r++;
//		if (need.count(t))
//		{
//			window[t]++;
//			if (need[t] == window[t])
//				valid++;
//		}
//		//�ҵ��������������䣬������ҪѰ�����Ž�
//		while (valid == need.size())
//		{
//			ans = min(ans, r - l);
//			int t = v[l];
//			l++;
//			if (need.count(t))//����Ϊ����ȷ�����ǲ���need������ߵģ���deque�ͺܼ���
//			{
//				if (need[t] == window[t])
//					valid--;
//				window[t]--;//Ӧ��need����������ֵͬ�������
//			}
//		}
//	}
//	return ans == v.size() + 1 ? 0 : ans;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int M, N, t;
//		cin >> N;
//		vector<int> v;
//		while (N--)
//		{
//			cin >> t;
//			v.push_back(t);
//		}
//		cin >> M;
//		vector<int> u;
//		while (M--)
//		{
//			cin >> t;
//			u.push_back(t);
//		}
//
//		cout << func(v, u) << endl;
//	}
//}
//#elif 0
//
//#else
//#include<algorithm>
//#include <deque>
//class Solution {
//public:
//	int lengthOfLongestSubstring(string s) {
//		//ʹ��˫�˶��У�����ʹ��hash����Ϊ����һ����Ӵ�����֤���������Ԫ�ر���ԭ����˳��
//		deque<char> need;
//		size_t max_num = 0;
//		int index = 0;
//		while (index < s.size())
//		{
//			if (!judge(need, s[index]))
//			{
//				need.push_back(s[index]);
//				index++;
//				continue;
//			}
//			else
//			{
//				//��ϸ���
//				max_num = max(max_num, need.size());
//				need.pop_front();
//			}
//		}
//		return max_num = max(max_num, need.size());
//	}
//	bool judge(deque<char>& tmp, char str)
//	{
//		for (auto &e : tmp)
//		{
//			if (e == str)
//			{
//				return true;
//			}
//		}
//		return false;
//	}
//};
//#endif
