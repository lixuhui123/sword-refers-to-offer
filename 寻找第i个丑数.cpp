//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int GetUglyNumber_Solution(int index)
//{
//	if (index <= 0)
//		return 0;
//	int p2 = 0, p3 = 0, p5 = 0;//初始化三个指向三个潜在成为最小丑数的位置
//	vector<int> result(index, 0);
//	result[0] = 1;
//	for (int i = 1; i < index; ++i)
//	{
//		result[i] = min(result[p2] * 2, min(result[p3] * 3, result[p5] * 5));
//		if (result[i] == result[p2] * 2)
//			p2++;//为了防止重复需要三个if都能够走到
//		if (result[i] == result[p3] * 3)
//			p3++;//为了防止重复需要三个if都能够走到
//		if (result[i] == result[p5] * 5)
//			p5++;//为了防止重复需要三个if都能够走到
//	}
//	return result[index - 1];
//}
//int main()
//{
//	cout<<GetUglyNumber_Solution(5);
//
//	system("pause");
//	return 0;
//}
// 
//
////class Solution {
////public:
////	int GetUglyNumber_Solution(int index) {
////		//先求一个数的因数，再求因数里面的质数，辗转相除法求因数，
////		//1是从小到大的第一个丑数，求第index的丑数
////		if (index == 1)
////			return 1;
////		if (index == 2)
////			return 2;
////		if (index == 3)
////			return 3;
////		if (index == 4)
////			return 5;
////
////		int i = 5;
////		int num = 4;
////		while (1)
////		{
////			++i;
////			if (yinshu(i))
////			{
////				++num;
////				if (num == index)
////				{
////					return i;
////				}
////			}
////
////		}
////	}
////	//求质因数
////	bool yinshu(int a)
////	{
////		//6
////		vector<int> rem;
////		rem.push_back(a);
////		for (int i = 2; i < a / 2; ++i)
////		{
////			if (a%i == 0)
////			{
////				int tmp = a / i;
////				rem.push_back(i);
////				rem.push_back(tmp);
////			}
////		}
////		//寻找质数,除了1它本身没有因数
////		vector<int> zhishu;
////		for (auto &e : rem)
////		{
////			if (iszhishu(e))
////			{
////				zhishu.push_back(e);
////			}
////		}
////		for (auto &e : zhishu)
////		{
////			if (e == 2 || e == 3 || e == 5)
////			{
////				continue;
////			}
////			else
////			{
////				return false;
////			}
////		}
////		return true;
////
////	}
////	bool iszhishu(int e)
////	{
////		for (int i = 2; i < e; ++i)
////		{
////			if (e%i == 0)
////			{
////				return false;;
////			}
////			 
////		}
////		return true;
////	}
////};
// 