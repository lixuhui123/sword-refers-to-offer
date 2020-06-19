//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
////暴力解法
//int jieyushui(vector<int>& v)
//{
//	int len = v.size();
//	
//	int anx = 0;
//	for (int i = 1; i < len-1; ++i)
//	{
//		int l_max = 0;
//		int r_max = 0;//每次都需要清零
//		for (int j = i; j >= 0; --j)
//		{
//			l_max = max(v[j], l_max);
//		}
//		for (int k=i;k<len;++k)
//		{
//			r_max = max(v[k], r_max);
//		}
//		anx += min(r_max, l_max)-v[i];
//	}
//	return anx;
//}
//
//int trap(vector<int> v)
//{
//	int len = v.size();
//	vector<int> l_max(len);
//	vector<int> r_max(len);
//	l_max[0] = v[0];//0和n-1的位置不会装雨水
//	r_max[len - 1] = v[len - 1];
//	int anx = 0;
//	//从左往右
//	for (int i = 1; i < len; ++i)
//	{
//		l_max[i] = max(l_max[i - 1], v[i]);
//	}
//	for (int j = len - 2; j >= 0; --j)
//	{
//		r_max[j] = max(r_max[j + 1], v[j]);
//	}
//	for (int i = 1; i < len; ++i)
//	{
//		anx += min(l_max[i], r_max[i]) - v[i];
//	}
//	return anx;
//
//}
//
//int main()
//{
//	vector<int> v{ 0,1,0,2,1,0,1,3,2,1,2,1 };
//	cout << trap(v);
//	system("pause"); 
//	return 0;
//}