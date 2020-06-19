// //源代码思路参考某大神
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//	int i = 0;
//	while (i < s.length()) 
//	{
//		if (s[i] == ']')
//		{
//			int j = i;//j用来向前寻找与]相匹配的[
//			int k = 0;//k用来记录'|'所在位置
//			while (s[j] != '[') 
//			{
//				if (s[j] == '|')
//				{
//					k = j;
//				}
//				j--;
//			}
//			cout << "j=" << j << endl;
//			cout << "k=" << k << endl;
//			cout << "i=" << i << endl;
//
//			int len = stoi(s.substr(j + 1, k - j));
//			string s1 = s.substr(k + 1, i - k - 1);
//			string s2;
//			for (int si = 0; si < len; si++) 
//			{//将识别到的括号内容进行解码
//				s2 += s1;
//			}
//			s = s.replace(j, i - j + 1, s2);
//			i = j;//替换后i所指向的内容变化，从替换部分的头开始再寻找
//		}
//		i++;
//	}
//	cout << s << endl;
//	system("pause");
//}
//
//
//
//
////HG[3 | B[2 | CA]]F  HG[3|BCACA]F   
////HG BCACA BCACA BCACA F
////HG[3 | B[2 | CA]]F− > HG[3 | BCACA]F− > HG B CACA B CACA B CACA F
