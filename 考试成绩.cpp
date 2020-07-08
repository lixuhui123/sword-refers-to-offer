//#include <iostream>
//#include <string>
//#include <vector>
//#include <unordered_map> 
//#include <algorithm>
//using namespace std;
//int func(int pep,int g_nums,vector<int>goods, vector<string>str)
//{
//	//±È¿˙¡–£ª
//	int ret = 0;
//	for (int i = 0; i < g_nums; ++i)
//	{
//		unordered_map<char, int> mem;
//		int max = 0;
//		for (int j = 0; j < pep; ++j)
//		{
//			mem[str[j][i]]++;
//			if (max < mem[str[j][i]])
//			{
//				max = mem[str[j][i]];
//			}
//		}
//		ret += (max*goods[i]);
//	}
//	return ret;
//}
//int main()
//{
//	int num = 0;
//	int num1 = 0;
//	while (cin >> num>>num1)
//	{
//		vector<string> str;
//		vector<int> goods;
//		for (int i = 0; i < num; ++i)
//		{
//			string tmp;
//			cin >> tmp;
//			str.push_back(tmp);
//		}
//		for (int i = 0; i < num1; ++i)
//		{
//			int good = 0;
//			cin >> good;
//			goods.push_back(good);
//		}
//		cout<<func(num, num1, goods, str);
//	}
//	system("pause"); 
//	return 0;
//}
//
// 