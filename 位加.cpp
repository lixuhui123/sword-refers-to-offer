//#include <iostream>
//using namespace std;
//
//
//const int MAXN = 100;
//int dx[] = { 0,1,0,-1 }, dy[] = { 1,0,-1,0 };    //�ĸ����� 
//int vis[MAXN][MAXN] = { 0 };    //��¼����
//int sum;    //��¼���
//
//class Solution {
//public:
//	void dfs(int x, int y, int k, int m, int n)
//	{
//		vis[x][y] = 1;
//		for (int i = 0; i <= 3; ++i)
//		{
//			int newx = x + dx[i], newy = y + dy[i];
//			//Ԥ�з����Ƿ�Ϸ����Ϸ��ʹӸ÷����������
//			if (vis[newx][newy] == 0 && newx >= 0 && newx < m&&newy >= 0 && newy < n && (newx % 10 + newx / 10 + newy % 10 + newy / 10 <= k))
//			{
//				++sum;
//				dfs(newx, newy, k, m, n);
//			}
//		}
//	}
//	int movingCount(int k, int rows, int cols)
//	{
//		if (k < 0)
//			return 0;
//		memset(vis, 0, sizeof(vis));
//		sum = 1;
//		dfs(0, 0, k, rows, cols);
//		return sum;
//
//	}
//};
//
//int main()
//{
//	Solution test;
//	cout << test.movingCount(-1, 10, 10);
//	system("pause");
//	return 0;
//}