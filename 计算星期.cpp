//#include <iostream>
//#include <vector>
//using namespace std;
//#pragma warning(disable:4996)
//
//int CaculateWeekDay(int y, int m, int d)
//{
//	if (m == 1 || m == 2) {
//		m += 12;
//		y--;
//	}
//	int iWeek = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
//	return iWeek;
//}
//int main()
//{
//	int num = 0;
//	while (cin>>num)
//	{
//		vector<vector<int>> v;
// 		 
//		for (int i = 0; i < num; ++i)
//		{
//			vector<int> tmp;
//			for (int i = 0; i < 6; ++i)
//			{
//				int anx;
//				cin >> anx;
//				tmp.push_back(anx);
//			}
//			v.push_back(tmp);
//		}
//		for (auto & e : v)
//		{
//			int w1 = CaculateWeekDay(e[0], e[1], e[2]);
//			int w2 = CaculateWeekDay(e[3], e[4], e[5]);
//			if (w1 == w2)
//				cout << "True" << endl;
//			else
//				cout << "False" << endl;
//		}
//	}
//	return 0;
//}
//
