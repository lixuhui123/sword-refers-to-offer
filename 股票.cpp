//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int sum(vector<int> &t, vector<int>::iterator a, vector<int>::iterator b)
//{
//	int add = 0;
//	for (auto i = a; i < b; ++i)
//	{
//		add += (*i);
//	}
//	return add;
//}
//int main()
//{
//	int m, n;
//	while (cin >> m >> n)
//	{
//		if (n == 0)
//		{
//			cout << 0 << endl;
//			continue;
//		}
//
//		vector<int> v;
//		int tmp;
//		for (int i = 0; i < m; ++i)
//		{
//			cin >> tmp;
//			v.push_back(tmp);
//		}
//		int q;
//		cin >> q;
//		vector<int> qes;
//		for (int i = 0; i < q; ++i)
//		{
//			int t;
//			cin >> t;
//			qes.push_back(t);
//		}
//		
//
//		sort(v.begin(), v.end());
//		int ret = 0;
//		//选择当前最大的，n限制，qes询问
//		for (auto e : qes)
//		{
//			vector<int> _v(v);
//			_v.erase(_v.begin() + e, _v.end());
//			int step,s;//分多少天
//			s = e % n;
//			step = (e / n) + s;
//			for (int i = 1; i <= step; ++i)
//			{
//				int add = 0;
//
//				if (n <= _v.size())
//				{
//					add += sum(_v, _v.end()-n, _v.end());
//					_v.erase(_v.end() - n, _v.end());
//					add *= i;
//				}
//				else
//				{
//					int g=0;
//					for (auto &k : _v)
//					{
//						g += k;
//					}
//					g *= i;
//					add += g;
//				}
//				ret += add;
//			}
//			cout << ret << endl;
//			ret = 0;
//		}
//		
//
//
//
//	}
//	system("pause"); 
//	return 0;
//}