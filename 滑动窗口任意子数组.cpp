//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int numsubstring(int k, string & str)
//{
//	int size = str.size();
//	int index = 0;
//	int ret = 0;
//	int count = 0;
//	for (int i = 0; i < size; ++i)
//	{
//		if ('1' == str[i])
//		{
//			count++;
//		}
//	}
//	if (count < k)
//		return 0;
//	for (int i = 0; i < size; ++i)
//	{
//		index = i;
//		count = 0;
//		while (count < k && index < size)
//		{
//			if (str[index] == '1' && ++count == k)
//			{
//				ret++;
//				index++;
//				break;
//			}
//			index++;
//		}
//		//寻求左边沿固定情况下符合情况的所有值
//		
//		while (index<size && str[index]!='1')
//		{
//			ret++; 
//			index++;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int num = 0;
//	cin >> num;
//	string str;
//	cin >> str;
//	cout << numsubstring(num, str);
//	system("pause"); 
//	return 0;
//}
////int NumSubString(int k, String str) 
////	{
////		char[] chars = str.toCharArray();
////		int res = 0;
////		int len = chars.length;
////		for (int i = 0; i < len; i++) {
////			if (chars[i] == '1') {
////				res++;
////			}
////		}
////		if (res < k) {
////			return 0;
////		}
////		res = 0;
////		for (int i = 0; i < len; i++) {
////			/*滑动索引*/
////			int index = i;
////			int count = 0;
////			while (count < k && index < len) {
////				if (chars[index] == '1' && ++count == k) {
////					res++;
////					index++;
////					break;
////				}
////				index++;
////			}
////			/*满足k后继续右滑*/
////			while (index < len && chars[index] != '1') {
////				res++;
////				index++;
////			}
////		}
////		return res;
////	}
//// 