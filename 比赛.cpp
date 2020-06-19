//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int n, m;
//	while (cin>>n>>m)
//	{
//		vector<int> v;
//		int chang = 0;
//		int win = 0;
//		for (int i = 0; i < n; ++i)
//		{
//			int tmp = 0;
//			cin >> tmp;
//			v.push_back(tmp);
//		}
//		if (v.size() == 0)
//		{
//			cout << 0 << endl;
//			continue;
//		}
//		if (v.size() == 1)
//		{
//			cout << 0 << endl;
//			continue;
//
//		}
//		//v是战斗力不能变
//		vector<int> flag(n,0);//获胜次数
//		vector<int> pig;//比赛场次
//		for (int i = 0; i < n; ++i)
//		{
//			pig.push_back(i);
//		}
//		
//		while (1)
//		{
//			if (v[pig[0]] > v[pig[1]])
//			{
//				flag[pig[0]]++;
//				chang++;
//				pig.push_back(pig[1]);
//				pig.erase(pig.begin() + 1);
//			}
//			else if (v[pig[0]] < v[pig[1]])
//			{
//				flag[pig[1]]++;
//				chang++;
//				pig.push_back(pig[0]);
//				pig.erase(pig.begin());
//			}
//			int ok=0;
//			for (auto &e : flag)
//			{
//				if (e == m)
//				{
//					ok = m;
//				}
//			}
//			if (ok == m)
//			{
//				cout << chang << endl;
//				break;
//			}
//			
//		}
//
//	}
//	//system("pause"); 
//	return 0;
//}

/* Window1
Window2
False
Window3
Invalid operation
Window2
LoadFromPool
Window3
NULL */