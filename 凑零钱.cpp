//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int coinChange(vector<int> & coins, int amount)
//{
//	/* ������Ҫ��öӲ�� */
//	//�����СΪamount+1 ,��ʼֵΪamount+1
//	vector<int> dp(amount + 1, amount + 1);
//	//base case
//	dp[0] = 0;
//	for (int i = 0; i < dp.size(); ++i)
//	{
//		//�ڲ�for������������+1����Сֵ
//		for (int coin : coins)
//		{
//			//�������޽⣬����
//			if (i - coin < 0)
//			{
//				continue;
//			}
//			dp[i] = min(dp[i], 1 + dp[i - coin]);
//		}
//	}
//	return (dp[amount] == amount + 1) ? -1 : dp[amount];
//}
//
//int main()
//{
//	/* �м�����ֵ����Ǯ���������ޣ���������������Ҫ����Ǯ�Ҵճɽ��  */
//	/* dp����ĵ����ⷨ */
//	
//	vector<int > v{ 1,2,5 };
//	cout<<coinChange(v, 11);
//	system("pause"); 
//	return 0;
//}
//
//
/////* �ж�������Ǯ���� */
/////* ��1,5,10,25,50�ֵ�Ӳ�ң��������Ҫ��Ǯ�Ľ���ж�������Ǯ��ʽ */
////int iteration(int n)
////{
////	int arr[] = { 1,5,10,25,50 };
////	int brr[1001] = {0};
////	brr[0] = 1;
////	for (int i = 0; i < 5; ++i)
////	{
////		for (int j = arr[i]; j < n + 1; ++j)
////		{
////			brr[j] += brr[j - arr[i]];
////		}
////	}
////	return brr[n];
////}
////
////
////
////
////
////
