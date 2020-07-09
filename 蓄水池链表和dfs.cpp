//#include<iostream>
//#include<vector>
//#include<map>
//using namespace std;
//void dfs(map<int,vector<int>>& m_map,vector<int>& tag,int k,int m)
//{
//	//首先对他进行的操作k节点，m操作
//	tag[k] = m;
//	int size = m_map[k].size();
//	for (int i = 0; i < size; ++i)
//	{
//		int index = m_map[k][i];
//		dfs(m_map, tag, index, m);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	while (cin >> n)
//	{
//		vector<int> ret(n + 1, 0);//记录操作的状态
//		vector<int> res;//记录查询的状态
//		map<int, vector<int>> map1;
//		map<int, vector<int>>map2;
//		for (int i = 0; i < n-1; ++i)
//		{
//			int a, b;
//			cin >> a >> b;
//			if (a > b)
//			{
//				swap(a, b);//小的为父节点
//			}
//			map1[a].push_back(b);//记录a的孩子
//			map2[b].push_back(a);//记录b的父亲
//		}
//		int k;
//		cin >> k;
//		for (int i = 0; i < k; ++i)
//		{
//			int a, b;
//			cin >> a >> b;   //a操作，b节点
//			if (a == 1)
//			{
//				dfs(map1, ret, b, 1);//加水
//			}
//			else if (a == 2)
//			{
//				dfs(map2, ret, b, 0);//放水
//			}
//			else
//			{
//				res.push_back(ret[b]);
//			}
//		}
//		for (int i=0;i<res.size();++i)
//		{
//			cout << res[i] << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
////void dfs(map<int, vector<int>> mp, vector<int> &v, int k, int m)
////{
////	int index;
////	v[k] = m;//它首先被操作，该是什么就是什么
////	for (int i = 0; i < mp[k].size(); i++)
////	{
////		index = mp[k][i];
////		v[index] = m;
////		dfs(mp, v, index, m);
////	}
////}
////int main()
////{
////	int n; 
////	cin >> n; 
////	map<int, vector<int>> mp1, mp2;
////	vector<int> v(n + 1, 0);
////	vector<int> res;
////	int a, b;
////	while (n > 1)
////	{
////		cin >> a >> b;
////		if (a > b)
////			swap(a, b);
////		mp1[a].push_back(b);//存储a的孩子节点
////		mp2[b].push_back(a);//存储b的父节点，这样子就不用邻接矩阵了，666
////		n--;
////	}
////	int num;
////	cin >> num;
////	while (num--)
////	{
////		cin >> a >> b;
////		if (a == 1)
////			dfs(mp1, v, b, 1);//b是对应的节点
////		else if (a == 2)
////			dfs(mp2, v, b, 0);
////		else {
////			res.push_back(v[b]);
////		}
////	}
////	for (int i = 0; i < res.size(); i++)
////		cout << res[i] << endl;
////	system("pause");
////	return 0;
////}