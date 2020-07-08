//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int num;
//	while (cin >> num)
//	{
//		while (num--)
//		{
//			string str;
//			string tmp;
//			cin >> str;
//			char c1 = 0, c2 = 0, rep = 0;
//			size_t pos = str.rfind('%');
//			while (pos != string::npos && pos + 2 < str.size())
//			{
//				c1 = str[pos + 1];
//				c2 = str[pos + 2];
//				if (isdigit(c1) || isalpha(c1) && isdigit(c2) || isalpha(c2))
//				{
//					string t = str.substr(pos + 1, 2);
//					rep = stoi(t, 0, 16);
//					str[pos] = rep;
//					str.erase(pos + 1, 2);
//				}
//				else
//				{
//					//不满足两个16进制数的条件
//						tmp = str.substr(pos) + tmp;
//					str = str.substr(0, pos);
//				}
//				pos = str.rfind('%');
//			}
//			str = str + tmp;
//			cout << str << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//
////#include <string>
////#include <iostream>
////#include <cctype>
////using namespace std;
////
////int main(void)
////{
////
////	int T = 0;
////	while (cin >> T)
////	{
////		while (T--)
////		{
////			string str = "";
////			string temp = "";
////			cin >> str;
////			int pos = str.rfind('%');//最后一个%的数组下标位置
////			char c1 = 0, c2 = 0, replace = 0;
////			string hexstr = "";
////			while (pos != -1 && (pos + 2) < str.size())
////			{
////				c1 = str[pos + 1];
////				c2 = str[pos + 2];
////				if ((isdigit(c1) || isalpha(c1))
////					&& (isdigit(c2) || isalpha(c2)))//判断这个字符为十六进制字符
////				{
////					hexstr = str.substr(pos + 1, 2);
////					replace = stoi(hexstr, 0, 16);
////					hexstr.clear();
////					//关键操作
////					str[pos] = replace;
////					str.erase(pos + 1, 2);
////				}
////				else
////				{
////					temp = str.substr(pos) + temp;
////					str = str.substr(0, pos);
////				}
////				pos = str.rfind('%', pos);
////			}
////			temp = str + temp;
////			cout << temp << endl;
////		}
////	}
////	return 0;
////}
////
////
