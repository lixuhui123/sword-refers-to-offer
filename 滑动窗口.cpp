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
//		//找到符合条件的区间，接下来要寻求最优解
//		while (valid == need.size())
//		{
//			ans = min(ans, r - l);
//			int t = v[l];
//			l++;
//			if (need.count(t))//是因为并不确定他是不是need的最左边的，用deque就很简单了
//			{
//				if (need[t] == window[t])
//					valid--;
//				window[t]--;//应对need中有两个相同值的情况，
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
//		//使用双端队列，不能使用hash，因为这是一个最长子串，保证窗口里面的元素保持原来的顺序
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
//				//更细结果
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
