//#include <iostream>
//#include <vector>
//using namespace std;
//void func(vector<vector<int >> &m_v)
//{
//	int _size = m_v.size();
//	if (_size == 0)
//	{
//		cout << 0;
//		return;
//	}
//	for (int i=0;i<_size;++i)
//	{
//		//对每个vector处理；
//		int n = m_v[i][0];
//		int m = m_v[i][1];
//		int a = m_v[i][2];
//		int b = m_v[i][3];
//		int sub = m * a;
//		int ret = n * b;
//		int ret = 0;
//		for (int i = sub; sub; sub%b)
//		{
//			ret++;
//		}
//		//vector<int> pep(m, a);
//	
//		//for (int j = 0; j < m_v[i][0]; ++j)
//		//{
//		//	//一次攻击m_v[i][3]
//		//	int z = 0;
//		//	for (int step = 0; step < m; ++step)//攻击范围
//		//	{
//		//		if (z < b)
//		//		{
//		//			if (pep[step] > 0 &&(pep[step]==1))
//		//			{
//		//				pep[step]--;
//		//				z++;
//		//			}
//		//			else
//		//			{
//		//				continue;
//		//			}
//		//		}
//		//	}
//		//}
//		//int ret = 0;
//		//for (auto e : pep)
//		//{
//		//	if (e == 0)
//		//	{
//		//		ret++;
//		//	}
//		//}
//		//cout << ret<<endl;
//	}
//
//}
//
//
//int main()
//{
//	int t;
//	vector<vector<int>> all;
//	
//	while (cin >> t)
//	{
//		for (int i = 0; i < t; ++i)
//		{
//			vector<int> tmp;
//			int ok;
//			for (int j = 0; j < 4; ++j)
//			{
//				cin >> ok;
//				tmp.push_back(ok);
//			}
//			all.push_back(tmp);
//		}
//		func(all);
//	}
//	
//	system("pause"); 
//	return 0;
//}