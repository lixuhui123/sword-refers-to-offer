//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string str;
//	while (getline(cin, str))
//	{
//		//cout << str<<endl;
//		int begin = 0;
//		int end = 0;
//		for (int i=0;i<str.size();++i)
//		{
//			if (str[i] == '2')
//			{
//				begin = i;
//				break;
//			}
//		}
//		for (int i = 0; i < str.size(); ++i)
//		{
//			if (str[i] == '5')
//			{
//				end = i;
//			}
//		}
//		if (begin == end)
//		{
//			cout << 0 << endl;
//		}
//		else if (str[0] == '2' && end != 0)
//		{
//			cout << end - begin + 1 << endl;
//		}
//		else if (begin == 0)
//		{
//			cout << 0 << endl;
//		}
//		else if(end==0)
//		{
//			cout << 0 << endl;
//		}
//		else
//		{
//			cout << end - begin + 1<<endl;
//		}
//
//	}
//	
//	
//	system("pause"); 
//	return 0;
//}