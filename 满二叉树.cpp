//#include<stdio.h>
//#include<stdlib.h>
//#include <algorithm>
//void SelectionSort(int arr[], int length)
//{
//	int i, j;
//	int _min, tmp, min_index;
//	for (i = 0; i < length; ++i)
//	{
//		_min = arr[i];
//
//		for (j = i + 1; j < length; ++j)
//		{
//			if (arr[j] > _min)
//			{
//				_min = arr[j];
//				min_index = j;
//			}
//		}
//		if (i != min_index)
//		{
//			tmp = arr[min_index];
//			arr[min_index] = arr[i];
//			arr[i] = tmp;
//		}
//
//	}
//}
//int main()
//{
//	int arr[11] = { 5,0,1,123,13,11,6,5,4,3,1 };
//	SelectionSort(arr, 11);
//	for (int i = 0; i < 11; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//
///* 选择排序将新旧位置交换 */
//
//
//
//
//
//
//
////#include <iostream>
////#include <functional>
////#include <vector>
////
////using namespace std;
////int leve(int lef)
////{
////	for (int i=0;i<50;++i)
////	{
////		if (pow(2, i) <= lef && pow(2, i + 1) > lef)
////		{
////			return i+1;
////		}
////	}
////
////}
////
////int main()
////{
////	int tmp;
////	while (cin >> tmp)
////	{
////		vector<vector<int>> v;
////		for (int i = 0; i < tmp; ++i)
////		{
////			int a, b;
////			vector<int> ok;
////			cin >> a >> b;
////			ok.push_back(a);
////			ok.push_back(b);
////			v.push_back(ok);
////		}
////
////		for (auto e : v)
////		{
////			int lev = leve(e[0]);
////			int size = lev - e[1];
////			if (size < 1)
////			{
////				cout << -1 << endl;
////				continue;
////			}
////			int flag = e[0];
////			for (int i = 0; i < size; ++i)
////			{
////				flag /= 2;
////			}
////			if (flag >= 1)
////			{
////				cout << flag << endl;
////			}
////			else
////			{
////				cout << -1 << endl;
////			}
////		}
////	}
////
////	system("pause");
////	return 0;
////}