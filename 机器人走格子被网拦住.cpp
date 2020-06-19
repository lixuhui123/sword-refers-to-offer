//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	int next[4][2] = { {1,0},{0,1},{-1,0},{0,-1} };
//	int movingCount(int threshold, int rows, int cols)
//	{
//		vector<vector<bool>>flag(rows, vector<bool>(cols, false));
//		dfs(threshold, rows, cols, 0, 0, flag);
//		return ret + 1;
//	}
//	int ret = 0;
//	void dfs(int thr, int rows, int cols, int x, int y, vector<vector<bool>> & flag)
//	{
//		flag[x][y] = true;
//		for (int i = 0; i < 4; ++i)
//		{
//			int nx = x + next[i][0];
//			int ny = y + next[i][1];
//			if (nx >= 0 && nx < rows && ny >= 0 && ny < cols
//				&& sumwei(nx, ny) <= thr && flag[nx][ny] == false)
//			{
//				ret++;
//				dfs(thr, rows, cols, nx, ny, flag);
//
//			}
//		}
//	}
//	int sumwei(int x, int y)
//	{
//		int one = 0;
//		for (; x; x /= 10)
//		{
//			int tmp = x % 10;
//			one += tmp;
//		}
//		int two = 0;
//		for (; y; y /= 10)
//		{
//			int tmp = y % 10;
//			two += tmp;
//		}
//		return one + two;
//	}
//};
//
//int main()
//{
//	int a, b, c;
//	Solution test;
//	while (cin >> a >> b >> c)
//	{
//		cout << test.movingCount(a, b, c) << endl;
//	}
//	
//	system("pause");
//	return 0;
//}