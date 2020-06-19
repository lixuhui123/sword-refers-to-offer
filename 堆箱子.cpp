//#include <iostream>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//
//int main()
//{
//	int next[6][3] = { {0,1,0},{0,-1,0},{-1,0,0},{1,0,0},{0,0,1},{0,0,-1} };
//	int tmp;
//	while (cin >> tmp)
//	{
//		vector<vector<int>> v;
// 		for (int i = 0; i < tmp; ++i)
//		{
//			int a, b, c;
//			cin >> a >> b >> c;
//			vector<int> m;
//			m.push_back(a);
//			m.push_back(b);
//			m.push_back(c);
//			v.push_back(m);
//		}
//		int ret = v.size() * 6;
//		for (auto e:v)
//		{
//			for (int i = 0; i < 6; ++i)
//			{
//				int x = e[0] + next[i][0];
//				int y = e[1] + next[i][1];
//				int z = e[2] + next[i][2];
//
//				for (int i = 0; i < v.size(); ++i)
//				{
//					if (v[i][0] == x && v[i][1] == y && v[i][2] == z)
//					{
//						ret--;
//					}
//				}
//			}
//			
//		}
//		cout << ret << endl;
//	}
//	system("pause"); 
//	return 0;
//}