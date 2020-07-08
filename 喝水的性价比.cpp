//#if 0
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
// 
//int main()
//{
//	int num;
//	while (cin >> num)
//	{
//		vector<int> ret;
//		while (num--)
//		{
//			int x, a, b;
//			vector<int> tmp;
//			cin >> x >> a >> b;
//			float small = a / 500.0;
//			float big = b / 1500.0;
//			if (small <= big)
//			{
//				//先贪心小的
//				int ping = x % 500 ? x / 500 + 1 : x / 500;
//				ret.push_back(ping * a);
//			}
//			else if (small > big)
//			{
//				int ping = x / 1500;
//				int remain = a % 1500;
//				int small_ping = remain % 500 ? remain / 500 + 1 : remain / 500;
//				ret.push_back(ping*b + small_ping * a);
//			}
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
//#else
// 
//#include <iostream>
//using namespace std;//
//int main(void)
//{
//	int T = 0;
//	while (cin >> T)
//	{
//		while (T--)
//		{
//			long long total = 0, sprice = 0, bprice = 0, temp = 0, leastcost = 0;
//			cin >> total >> sprice >> bprice;
//			//判断单位性价比
//			if (sprice * 3 == bprice)//性价比相同
//			{
//				if (total % 500 == 0)//全买小瓶
//				{
//					leastcost = total / 500 * sprice;
//				}
//				else
//				{
//					leastcost = (total / 500 + 1)*sprice;
//				}
//			}
//			else if (sprice * 3 > bprice)//买大瓶性价比高
//			{
//				if (total % 1500 == 0)
//				{
//					//全买大瓶
//					leastcost = total / 1500 * bprice;
//				}
//				else
//				{
//					//三种可能：1 全买大瓶 2 只有一个小瓶其他大瓶 3只买两个小瓶其他大瓶
//					int allbigPrice = (total / 1500 + 1)*bprice;
//					int rest = total - total / 1500 * 1500;//剩下的容量
//					if (rest <= 500)
//					{
//						temp = total / 1500 * bprice + sprice;//只买一瓶小瓶
//						if (temp > allbigPrice)
//							leastcost = allbigPrice;
//						else leastcost = temp;
//					}
//					else if (rest <= 1000)
//					{
//						temp = total / 1500 * bprice + 2 * sprice;//只买两瓶小瓶
//						if (temp > allbigPrice)
//							leastcost = allbigPrice;
//						else leastcost = temp;
//					}
//					else
//					{
//						leastcost = allbigPrice;
//					}
//				}
//			}
//			else//小瓶性价比高
//			{
//				if (total % 500 == 0)//全买小瓶
//				{
//					leastcost = total / 500 * sprice;
//				}
//				else
//				{
//					int allsmallPrice = (total / 500 + 1)*sprice;//全买小瓶
//					//只买一瓶大瓶
//					int onebigPrice = (total / 500 - 2)*sprice + bprice;//大瓶可以抵掉两瓶小瓶
//					if (onebigPrice > allsmallPrice)
//						leastcost = allsmallPrice;
//					else leastcost = onebigPrice;
//
//				}
//			}
//			cout << leastcost << endl;
//
//		}
//
//	}
//	return 0;
//}
//#endif