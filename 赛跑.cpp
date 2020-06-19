//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int n = 0;
//
//	while (cin>>n)
//	{
//		vector<int> t1;
//		vector<int> t2;
//		for (int i = 0; i < n; ++i)
//		{
//			int tmp;
//			cin >> tmp;
//			t1.push_back(tmp-1);
//		}
//		for (int i = 0; i < n; ++i)
//		{
//			int tmp;
//			cin >> tmp;
//			t2.push_back(tmp-1);
//		}
//		vector<int> first(n,0);
//		vector<int> second(n,0);
//		for (int i = 0; i < n; ++i)
//		{
//			first[t1[i]] = i;
//		}
//		for (int i = 0; i < n; ++i)     
//		{
//			second[t2[i]] = i;
//		}
//		int ret = 0;
//		vector<bool> mem(n, true);
//		for (int i = 0; i < n; ++i)
//		{
//			if (first[i] > second[i])
//			{
//				mem[i] = false;
//				ret++;
//			}
//		}
//		vector<int> ok;
//
//		for (int i = 0; i < n; ++i)
//		{
//			vector<int> v1;
//			vector<int> v2;
//			if (mem[i] == true)
//			{
//				int tmp = first[i];//出发名次；
//				for (int j = 0; j < n; ++j)
//				{
//					if (tmp > first[j])
//					{
//						v1.push_back(j);
//					}
//				}
//				for (auto e : v1)
//				{
//					if (second[e] > second[i])
//					{
//						ret++;
//						break;
//					}
//				}
//
//			}
//		}
//		cout << ret << endl;
//	}
//	
//	return 0;
//}