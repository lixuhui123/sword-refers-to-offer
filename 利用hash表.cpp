//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> v(n,0);
//		int tmp;
//		for (int i = 0; i < n; ++i)
//		{
//			cin >> tmp;
//			v[i] = tmp;
//		}
//		unordered_map<int, int> m;
//		for (auto &e : v)
//		{
//			m[e]++;
//			
//		}
//		for (auto e : m)
//		{
//			if (e.second >= (n / 2))
//			{
//				cout << e.first<<endl;
//				break;
//			}
//		}
//
//	}
//	system("pause"); 
//	return 0;
//}