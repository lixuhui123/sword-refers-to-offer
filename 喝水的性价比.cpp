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
//				//��̰��С��
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
//			//�жϵ�λ�Լ۱�
//			if (sprice * 3 == bprice)//�Լ۱���ͬ
//			{
//				if (total % 500 == 0)//ȫ��Сƿ
//				{
//					leastcost = total / 500 * sprice;
//				}
//				else
//				{
//					leastcost = (total / 500 + 1)*sprice;
//				}
//			}
//			else if (sprice * 3 > bprice)//���ƿ�Լ۱ȸ�
//			{
//				if (total % 1500 == 0)
//				{
//					//ȫ���ƿ
//					leastcost = total / 1500 * bprice;
//				}
//				else
//				{
//					//���ֿ��ܣ�1 ȫ���ƿ 2 ֻ��һ��Сƿ������ƿ 3ֻ������Сƿ������ƿ
//					int allbigPrice = (total / 1500 + 1)*bprice;
//					int rest = total - total / 1500 * 1500;//ʣ�µ�����
//					if (rest <= 500)
//					{
//						temp = total / 1500 * bprice + sprice;//ֻ��һƿСƿ
//						if (temp > allbigPrice)
//							leastcost = allbigPrice;
//						else leastcost = temp;
//					}
//					else if (rest <= 1000)
//					{
//						temp = total / 1500 * bprice + 2 * sprice;//ֻ����ƿСƿ
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
//			else//Сƿ�Լ۱ȸ�
//			{
//				if (total % 500 == 0)//ȫ��Сƿ
//				{
//					leastcost = total / 500 * sprice;
//				}
//				else
//				{
//					int allsmallPrice = (total / 500 + 1)*sprice;//ȫ��Сƿ
//					//ֻ��һƿ��ƿ
//					int onebigPrice = (total / 500 - 2)*sprice + bprice;//��ƿ���Եֵ���ƿСƿ
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