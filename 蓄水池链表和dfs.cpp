//#include<iostream>
//#include<vector>
//#include<map>
//using namespace std;
//void dfs(map<int,vector<int>>& m_map,vector<int>& tag,int k,int m)
//{
//	//���ȶ������еĲ���k�ڵ㣬m����
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
//		vector<int> ret(n + 1, 0);//��¼������״̬
//		vector<int> res;//��¼��ѯ��״̬
//		map<int, vector<int>> map1;
//		map<int, vector<int>>map2;
//		for (int i = 0; i < n-1; ++i)
//		{
//			int a, b;
//			cin >> a >> b;
//			if (a > b)
//			{
//				swap(a, b);//С��Ϊ���ڵ�
//			}
//			map1[a].push_back(b);//��¼a�ĺ���
//			map2[b].push_back(a);//��¼b�ĸ���
//		}
//		int k;
//		cin >> k;
//		for (int i = 0; i < k; ++i)
//		{
//			int a, b;
//			cin >> a >> b;   //a������b�ڵ�
//			if (a == 1)
//			{
//				dfs(map1, ret, b, 1);//��ˮ
//			}
//			else if (a == 2)
//			{
//				dfs(map2, ret, b, 0);//��ˮ
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
////	v[k] = m;//�����ȱ�����������ʲô����ʲô
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
////		mp1[a].push_back(b);//�洢a�ĺ��ӽڵ�
////		mp2[b].push_back(a);//�洢b�ĸ��ڵ㣬�����ӾͲ����ڽӾ����ˣ�666
////		n--;
////	}
////	int num;
////	cin >> num;
////	while (num--)
////	{
////		cin >> a >> b;
////		if (a == 1)
////			dfs(mp1, v, b, 1);//b�Ƕ�Ӧ�Ľڵ�
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