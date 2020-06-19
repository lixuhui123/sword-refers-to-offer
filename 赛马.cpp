//#include <iostream>
//using namespace std;
//int fahongbao(int n, int m, int a, int b)
//{
//	
//	int mem = n;
//	while (m%n)
//	{
//		--n;
//	}
//	int size = mem - n;
//	return size * a;
//}
//int mailiwu(int n, int m, int a, int b)
//{
//	int mem = m;
//	while (m%n)
//	{
//		++m;
//	}
//	int size =m - mem;
//	return size * b;
//}
//int main()
//{
//	int n, m, a, b;
//	while (cin >> n >> m >> a >> b)
//	{
//		if (n == 0)
//			cout << 0;
//		else if (m == 0)
//		{
//			//买礼物
//			int size = a > b ? b : a;
//			cout << n * size;
//		}
//		else
//		{
//			int liwu = mailiwu(n, m, a, b);
//			int hongbao = fahongbao(n, m, a, b);
//			cout << (liwu > hongbao ? hongbao : liwu);
//		}
//		
//	}
//	 
//	return 0;
//}
//
//
///* 你的输出为：Runtime Error:[ERROR] A Not allowed system call: runid:18280710 callid:13
// TO FIX THIS , ask admin to add the CALLID into corresponding LANG_XXV[] located at okcalls32/64.h ,and recompile judge_client */