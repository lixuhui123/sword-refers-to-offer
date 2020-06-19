//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<vector<int>> v;
//		int one, two;
//		
//		for (int i=0;i<=n;++i)
//		{
//			vector<int> tmp;
//			cin >> one >> two;
//			tmp.push_back(one);
//			tmp.push_back(two);
//			v.push_back(tmp);
//		}
//		vector<int> ok;
//		ok = v.back();
//		int a = ok[0];
//		int b = ok[1];
//		v.pop_back();
//		vector<int> ret;
//		for (int i = 1; i <= n; ++i)
//		{
//			ret.push_back(i);
//		}
//		for (auto e:v)
//		{
//			int max  ;
//			int min  ;
//			for (int j = 0; j < n; ++j)
//			{
//				if (ret[j] == e[0])
//				{
//					max = j;
//				}
//				else if (ret[j] == e[1])
//				{
//					min = j;
//				}
//			}
//			if (max < min)
//			{
//				;
//			}
//			else
//			{
//				int tmp = ret[max];
//				ret[max] = ret[min];
//				ret[min] = tmp;
//			}
//		}
//		int f, e;
//		for (int i = 0; i < n; ++i)
//		{
//			if (a == ret[i])
//			{
//				f = i;
//			}
//			else if (b == ret[i])
//			{
//				e = i;
//			}
//		}
//		cout << (f < e) << endl;
//		//return a < b;
//	}
//	system("pause"); 
//	return 0;
//}