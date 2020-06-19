//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//int main()
//{
//	string in;
//	while (cin >> in)
//	{
//		stack<char> st;
//		int left = 0;
//		int right = 0;
//		for (auto e : in)
//		{
//			if (e == '(')
//			{
//				left++;
//			}
//			else if (e == ')')
//			{
//				right++;
//
//			}
//		}
//		int ret = 0;
//		for (auto &e : in)
//		{
//			if (e == '(')
//			{
//				st.push('(');
//			}
//			else if (e == ')')
//			{
//				if (!st.empty())
//				{
//					ret++;
//					st.pop();
//				}
//			}
//		}
//		cout << ret << " " << left - ret << " " << right - ret << endl;
//
//	}
//	system("pause");
//	return 0;
//}