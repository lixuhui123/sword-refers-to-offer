//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int sum = 0;
//
//	while (cin >> sum)
//	{
//		vector<int> work;
//		vector<int> jam;
//		int i, tmp;
//		for (i = 0; i < sum; ++i)
//		{
//
//			cin >> tmp;
//			work.push_back(tmp);
//		}
//		getchar();
//		for (i = 0; i < sum; ++i)
//		{
//
//			cin >> tmp;
//			jam.push_back(tmp);
//		}
//		vector<int> ret(sum, 0);
//		if (work[0] == 0 && jam[0] == 0)
//		{
//			ret[0] = 2;
//		}
//		if (work[0] == 1 && jam[0] == 0)
//		{
//			ret[0] = 0;//¹¤×÷
//		}
//		if (work[0] == 0 && jam[0] == 1)
//		{
//			ret[0] = 1;//½¡Éí
//		}
//		
//		for (i = 1; i < sum; ++i)
//		{
//			if (work[i] == 0 && jam[i] == 0)
//			{
//				ret[i] = 2;
//            }
//			if (work[i] == 1 && jam[i] == 0)
//			{
//				if (ret[i - 1] == 0)
//				{
//					ret[i] = 2;
//				}
//				else if (ret[i - 1] == 1)
//				{
//					ret[i] = 0;
//				}
//				else
//				{
//					ret[i] = 0;
//				}
//
//			}
//			if (work[i] == 0 && jam[i] == 1)
//			{
//				if (ret[i - 1] == 0)
//				{
//					ret[i] = 1;
//				}
//				if (ret[i - 1] == 1)
//				{
//					ret[i] = 2;
//				}
//				if (ret[i - 1] == 2)
//				{
//					ret[i] = 1;
//				}
//				
//			}
//		}
//		int add=0;
//		for (auto & e : ret)
//		{
//			if (e == 2)
//			{
//				add++;
//			}
//		}
//		cout << add << endl;
//	}
//	system("pause"); 
//	return 0;
//
//
//}