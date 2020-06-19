//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<char> ret;
//		for (int i = 0; i < n; ++i)
//		{
//			int a, b, c, n;
//			cin >> a >> b >> c >> n;
//			string str;
//			str.push_back(a + '0');
//			str.push_back(b + '0');
//			str.push_back(c + '0');
//			for (int i = 0; i < n; ++i)
//			{
//				int len = str.size()-1;
//				string  tmp = to_string((str[len] - '0') + (str[len-1] - '0') + (str[len-2] - '0'));
//				str += tmp;
//			}
//			ret.push_back(str[n-1]);
//
//		}
//		for (auto &e : ret)
//		{
//			cout << e << endl;
//		}
//
//	}
//	system("pause"); 
//	return 0;
//}