//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
//int func(int *ret,int length)
//{
//	unordered_map<int, int> mp;
//	 
//	for (int i = 0; i < length; ++i)
//	{
//		for (int j = i; j < length; ++j)
//		{
//			int num = 0;
//			for (int k = i; k <= j; ++k)
//			{
//				num += ret[k];
//			}
//			mp[num]++;
//		}
//	}
//	int he = 0;
//	for (int i=0;i<length;++i)
//	{
//		he += ret[i];
//	}
//	int find = 0;
//	for (auto & e : mp)
//	{
//		if (e.second == 2)
//		{
//			find = e.first;
//		}
//	}
//	return he - (find * 2);
//}
//int main()
//{
//	int num = 0;
//	cin >> num;
//	while (num)
//	{
//		--num;
//		int tmp = 0;
//		cin >> tmp;
//		vector<int> ret;
//		for (int i = 0; i < tmp; ++i)
//		{
//			int ok = 0;
//			cin >> ok;
//			ret.push_back(ok);
//		}
//		int MIN = 10000000000;
//	    int const length = ret.size();
//		int * arr = new int(length+1);
//		int i = 0;
//		for (auto &e : ret)
//		{
//			arr[i] = e;
//			++i;
//		}
//		do
//		{
//			int tmp=func(arr,length);
//			if (tmp < MIN)
//			{
//				MIN = tmp;
//			}
//		} while (next_permutation(arr, arr+length));
//		cout << MIN << endl;
//		delete arr;
//	}
//	
//	system("pause");
//	return 0;
//}
