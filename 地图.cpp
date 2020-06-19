//#include <iostream>
//#include<vector>
//#include <string>
//using namespace std;
//int hasprime(int n)
//{
//	//奇数
//	int ret = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		if (i % 2 != 0)
//		{
//			ret++;
//		}
//	}
//	return ret;
//}
//int haseven(int n)
//{
//	int ret = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		if (i % 2 == 0)
//		{
//			ret++;
//		}
//	}
//	return ret;
//
//}
//void fill(vector<vector<char>> &v, vector<vector<string >> str, int x, int y, int flag, int post, int row, int col)
//{
//	int next[5][2] = { {0,0},{-1,0},{0,1},{1,0},{0,-1} };
//
//	 
//		for (int i = 0; i < 5; ++i)
//		{
//			int nx = x + next[i][0];
//			int ny = y + next[i][1];
//			if (nx >= 0 && nx < row && ny >= 0 && ny < col)
//			{
//				//行小于行数，列小于列数
//				v[nx][ny] = str[flag][post][i];//第几组里面的第几个string的第几个字符
//			}
//		}
//	 
//}
///*
//g	f	g	f
//g	r	g	r
//g-fg-
//g-fgf
//ggr-r
//ggr--
//
//*/
//int main()
//{
//	
//	int row, col;
//	while (cin>>row>>col)
//	{
//		vector<vector<char>> v(row, vector<char>(col, '0'));
//		vector<vector<string >> ret;
//		if (row == 1 || row==2)
//		{
//			int n = (col % 2) ? (col / 2 + 1) : col / 2;
//			vector<string> tmp;
//			for (int i = 0; i < n; ++i)
//			{
//				string str;
//				cin >> str;
//				tmp.push_back(str);
//			}
//			ret.push_back(tmp);
//			tmp.clear();
//			for (int i = 0; i < n; ++i)
//			{
//				string str;
//				cin >> str;
//				tmp.push_back(str);
//			}
//			ret.push_back(tmp);
//		}
//		 
//		else
//		{
//			for (int i = 0; i < (row / 3); ++i)
//			{
//				vector<string> str1;
//				for (int j = 0; j < haseven(col); ++j)
//				{
//					string tmp;
//					cin >> tmp;
//					str1.push_back(tmp);
//
//				}
//
//				ret.push_back(str1);
//				str1.clear();
//				for (int j = 0; j < hasprime(col); ++j)
//				{
//					string tmp;
//					cin >> tmp;
//					str1.push_back(tmp);
//				}
//				ret.push_back(str1);
//			}
//		
//			int n = haseven(col);
//			vector<string> tmp;
//			for (int i = 0; i < n; ++i)
//			{
//				string str;
//				cin >> str;
//				tmp.push_back(str);
//			}
//			ret.push_back(tmp);
//		}
//		 
//			int k = 0;
//			int post = 0;
//			for (int i= 0; i <=row; i+=4  )
//			{
//				post = 0;
//				for (int j = 0; j < col ; ++j)
//				{
//					if (j % 2 == 0)
//					{
//						fill(v, ret, i, j, k, post, row, col);
//						post++;
//					}
//											
//				}
//				k += 2;//偶数组
//				if (k >= v.size())
//				{
//					break;
//				}
//			}
//			k = 1;
//			for (int i=2;i < row ;i+=4)
//			{
//				post = 0;
//				for (int j = col - 1; j >= 0  ; --j)
//				{
//					if (j % 2 != 0)
//					{
//						fill(v, ret, i, j, k,post, row, col);
//						post++;
//					}
//					
//				}
//				k += 2;
//				if (k >= v.size())
//				{
//					break;
//				}
//			}
//		
//		//填充最后一行
//			post = 0;
//			for (int j = col - 1; j >= 0    ; --j)
//			{
//				if (j % 2 == 0)
//				{
//					fill(v, ret, row-1, j, v.size()-1, post, row, col);
//					post++;
//				}
//
//			}
//	}
//	 
//	return 0;
//}