//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	bool match(char* str, char* pattern)
//	{
//		//�����ҵ������ˣ�����������ʱ���Ǹ�����ĿҪ�������������˲����ҹ���
//		//һ��Ҫ�мǣ���������ҹ���
//	   //pattern��ͨ�䴮
//		int row = strlen(str);
//		int col = strlen(pattern);
//		cout << row << " " << col << endl;
//		if (!row && !col)
//		{
//			//������Ϊ��
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
//		//ȫ����ʼ��Ϊ0��
//		//�����ʼֵ
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
//					//��ͨ�ַ�
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