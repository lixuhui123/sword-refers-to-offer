//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	bool match(char* str, char* pattern)
//	{
//		//终于找到规律了，这种题填表的时候还是根据题目要求填，填完了填对了才能找规律
//		//一定要切记，先填表再找规律
//	   //pattern是通配串
//		int row = strlen(str);
//		int col = strlen(pattern);
//		cout << row << " " << col << endl;
//		if (!row && !col)
//		{
//			//两个都为空
//			return true;
//		}
//		if (row == 0)
//		{
//			if (pattern[col - 1] == '*')
//				return true;
//			else
//				return false;
//		}
//		int i = 0;
//		int j = 0;
//		vector<vector<int>> mem(col + 1, vector<int>(row + 1, 0));
//		//全部初始化为0；
//		//填入初始值
//		mem[0][0] = 1;
//		for (i = 1; i <= col; ++i)
//			mem[i][0] = 0;
//		for (i = 1; i <= row; ++i)
//			mem[0][i] = 0;
//		for (i = 1; i <= col; ++i)
//		{
//			for (j = 1; j <= row; ++j)
//			{
//				if (pattern[i - 1] == '*')
//				{
//					mem[i][j] = 1;
//				}
//				else if (pattern[i - 1] == '.')
//				{
//
//					if (mem[i - 1][j - 1] == 1)
//					{
//						mem[i][j] = 1;
//					}
//					else
//					{
//						mem[i][j] = 0;
//					}
//				}
//				else
//				{
//					//普通字符
//					if (mem[i - 1][j - 1] && pattern[i - 1] == str[j - 1])
//					{
//						mem[i][j] = 1;
//					}
//					else {
//						mem[i][j] = 0;
//					}
//				}
//			}
//		}
//		return (bool)mem[col][row];
//
//	}
//};
//int main()
//{
//	char str[4] = "aaa";
//	char pattern[5] ="ab*a";
//	//cout << strlen(pattern);
//	Solution test;
//	cout<<test.match(str, pattern);
//	system("pause");
//	return 0;
//}