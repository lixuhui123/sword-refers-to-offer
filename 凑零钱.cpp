//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int coinChange(vector<int> & coins, int amount)
//{
//	/* 最少需要几枚硬币 */
//	//数组大小为amount+1 ,初始值为amount+1
//	vector<int> dp(amount + 1, amount + 1);
//	//base case
//	dp[0] = 0;
//	for (int i = 0; i < dp.size(); ++i)
//	{
//		//内层for求所有子问题+1的最小值
//		for (int coin : coins)
//		{
//			//子问题无解，跳过
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
//	/* 有几种面值的零钱，数量无限，给定金额，求最少需要多少钱币凑成金额  */
//	/* dp数组的迭代解法 */
//	
//	vector<int > v{ 1,2,5 };
//	cout<<coinChange(v, 11);
//	system("pause"); 
//	return 0;
//}
//
//
/////* 有多少种找钱方法 */
/////* 有1,5,10,25,50分的硬币，计算给出要找钱的金额有多少种找钱方式 */
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
