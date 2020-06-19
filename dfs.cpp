//#include <iostream>
//#include <vector>
//using namespace std;
////关键性的细节在于没有标记已访问的元素，造成乱访问，标记才是重点
//class Solution {
//public:
//	bool hasPath(char* matrix, int rows, int cols, char* str)
//	{
//		if (rows == 0 || cols == 0)
//			return false;
//		vector<vector<char>> v(rows, vector<char>(cols, '0'));
//		vector<vector<bool>> flag(rows, vector<bool>(cols, false));
//
//		int i = 0;
//		while (i<rows*cols)
//		{
//			v[i / cols][i%cols] = matrix[i];
//			++i;
//		}
//		bool ret=false;
//		for (int i=0;i<rows;++i)
//		{
//			for (int j = 0; j < cols; ++j)
//			{
//				if (v[i][j] == str[0])
//				{
//					vector<vector<char>> tmp(v);
//					vector<vector<bool>> f(flag);
//					//f[i][j] = true;
//					ret= dfs(tmp, rows, cols, i, j, str, 1,f);
//					if (ret == true)
//					{
//						
//						return true;
//					}
//				}
//			}
//		}
//		return false;
//	}
//	int next[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
//	bool dfs(vector<vector<char>> &v, int  rows, int  cols,int x,int y, char *str, int a, vector<vector<bool>>& f )
//	{
//		if (str[a] == '\0')
//			return true;
//		int nx, ny;
//		f[x][y] = true;
//		for (int i = 0; i < 4; ++i)
//		{
//			nx = x + next[i][0];
//			ny = y + next[i][1];
//			if (nx < 0 || nx >= rows || ny < 0 || ny >= cols)
//			{
//				continue;
//			}
//			
//            
//			if (v[nx][ny] == str[a] && f[nx][ny] ==false)
//			{
//                //cout << v[nx][ny] << " ";
//				if (dfs(v, rows, cols, nx, ny, str, a + 1, f))
//					return true;
//
//			}
//		}
//		return false;
//	}
//	 
//
//};
//
//int main()
//{
//	Solution test;
//	char m[] = "abcdef";
//	char str[] = "gbcf";
//	bool ret;
//	ret= test.hasPath(m, 2, 3, str);
//	cout << ret;
//	system("pause"); 
//	return 0;
//}