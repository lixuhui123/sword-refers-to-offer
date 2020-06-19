//#include <iostream>
//#include <unordered_map>
//using namespace std;
//int main()
//{
//	unordered_map<int, unsigned long long> map;
//	unsigned long long ret = 1;
//	unsigned long long mem=1;
//	for (int i = 1; i <= 20; ++i)
//	{
//		unsigned long long tmp = i * mem;
//		map[i] = tmp;
//		mem = tmp;
//	}
//	unordered_map<int, int> wei;
//	for (auto &e : map)
//	{
//		unsigned long long tmp;
//		int bit = 0;
//		for (tmp=e.second; tmp; tmp /= 10)
//		{
//			int ok = tmp % 10;
//			if (ok == 0)
//			{
//				bit++;
//			}
//			else
//			{
//				break;
//			}
//		}
//		wei[e.first] = bit;
//	}
//	/*for (auto &e : wei)
//	{
//		cout << e.first << " " << e.second << endl;
//	}*/
//	int num;
//	while (cin >> num)
//	{
//		vector<int> v;
//		for (int i = 0; i < num; ++i)
//		{
//			int tmp;
//			cin >> tmp;
//			v.push_back(tmp);
//		}
//		for (auto &e : v)
//		{
//			int retu=21;
//			for (auto f : wei)
//			{
//				if (f.second == e)
//				{
//					if (f.first < retu)
//					{
//						retu = f.first;
//					}
//				}
//			}
//			if (retu == 21)
//			{
//				cout << "No solution" << endl;
//			}
//			else
//			{
//				cout << retu << endl;
//			}
//			
//		}
//	}
//	system("pause"); 
//	return 0;
//}