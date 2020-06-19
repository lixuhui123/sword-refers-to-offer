//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	////HG[3 | B[2 | CA]]F  -> HG[3|BCACA]F  
//	//HG BCACA BCACA BCACA BCACA F
// //   HG BCACA BCACA BCACA F
//	string str;
//	while (cin>>str)
//	{
//		int i = 0;
//		while (i<str.size())
//		{
//			if (str[i] == ']')
//			{
//				int j = i;
//				int flag;
//				int post;//变量不赋初值是很危险的事情
//				while (j>0)
//				{
//					if (str[j] == '|')
//					{
//						flag = j;
//						--j;
//					}
//					else if (str[j] == '[')
//					{
//						post = j;
//						break;
//					}
//					else
//					{
//						--j;
//					}
//				}
//				cout << "post=" << post << endl;
//				cout << "flag=" << flag << endl;
//				cout << "i=" << i << endl;
//				int len = stoi(str.substr(post + 1, flag-post-1));
//				//cout << len << endl;
//				string tmp = str.substr(flag + 1, i-flag-1);
//				string s;
//				for (int i = 0; i < len; ++i)
//				{
//					s += tmp;
//				}
//				str.replace(post, i - post + 1, s);
//				i = post;
//			}
//			++i;
//		}
//		for (auto & e : str)
//		{
//			cout << e ;
//		}
//		cout << endl;
//	}
//	system("pause"); 
//	return 0;
//}
//
///* post=6
//flag=8
//i=11
//post=2
//flag=4
//i=10 */
//
///* HG[3|B[2|CA]]F
//j=6
//k=8
//i=11
//j=2
//k=4
//i=10
//HGBCACABCACABCACAF */