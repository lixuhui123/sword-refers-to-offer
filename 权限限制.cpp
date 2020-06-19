//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
// 
// 
//int main()
//{
//	int n;
//	while (cin>>n)
//	{
//		vector<string> qus;
//		for (int i = 0; i < n; ++i)
//		{
//			string tmp;
//			cin >> tmp;
//			qus.push_back(tmp);
//		}
//		int num;
//		cin >> num;
//		unordered_map<string,string> anx;
//		for (int i = 0; i < num; ++i)
//		{
//			string quan, str;
//			cin >> quan >> str;
//			 
//			 
//			int pos = str.find_last_of('/');
//			string tmp = str.substr(pos + 1);
//			if (anx.find(tmp) == anx.end())
//			{
//				anx[tmp] = quan;
//			}
//			
//			
//		}
//
//		for (auto & e : qus)
//		{
//			size_t pos = e.find_last_of('/');
//			string str1 = e.substr(pos+1);
//			if (str1.size() == 0)
//			{
//				cout << "N" << endl;
//				continue;
//			}
//			auto it = anx.find(str1);
//			if (it == anx.end())
//			{
//				//不存在，继承父亲的权限，向前找父亲
//				int pre = 0;
//				for (size_t i = pos-1; i >= 0; --i)
//				{
//					if (e[i] == '/')
//					{
//						pre = i;
//						break;
//					}
//				}
//				string father = e.substr(pre + 1, pos - pre - 1);
//				auto ret=anx.find(father);
//				if (ret == anx.end())
//				{
//					cout << "N" << endl;
//				}
//				else
//				{
//					cout << ret->second << endl;
//
//				}
//			}
//			else
//			{
//				cout << it->second << endl;
//			}
//
//
//
//		}
//	}
//	system("pause"); 
//	return 0;
//}