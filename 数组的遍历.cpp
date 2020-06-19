////输出的是给定所有牌的全排列
//#include <iostream>
//#include<vector>
//using namespace std;
////首先是每次都要重复干的事情，每次就是在盒子前面将手里的牌按从小到大的顺序放一张放到
////盒子里面
//bool flags[4] = { false };
//int  books[4];
//int pai = 3;
//void dfs(int steps)
//{
//	//先做三个盒子三张扑克牌
//	if (steps == pai + 1)
//	{
//		for (int i = 1; i <= pai; ++i)
//		{
//			cout << books[i] << ' ';
//		}
//		cout << endl;
//		//return;
//	}
//	for (int i = 1; i <= pai; ++i)
//	{
//		if (flags[i] == false)
//		{
//			books[steps] = i;
//			flags[i] = true;
//			dfs(steps + 1);
//			flags[i] = false;
//		}
//	}
//
//
//}
//int main()
//{ 
//	dfs(1);
//	system("pause");
//	return 0;
//}
