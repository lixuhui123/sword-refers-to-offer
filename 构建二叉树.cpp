//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	//ʹ�ò��鼯��
//	int n = 0;
//	while (cin >> n)
//	{
//		if (n==0)
//		{
//			cout << 0 << endl;
//		}
//		else
//		{
//			vector<int> m_v(n, -1);
//			int a, b;
//			for (int i = 0; i < n-1; ++i)
//			{
//				cin >> a >> b;
//				m_v[b] = a;//�������鼯
//
//			}
//			int max = 0;
//			for (int i = 0; i < n; ++i)
//			{
//				int j = i;
//				int count = 1;
//
//				while (m_v[j] != -1)
//				{
//					count++;
//					j = m_v[j];
//				}
//				if (count > max)
//				{
//					max = count;
//				}
//			}
//			cout << max << endl;
//			max = 0;
//		}
//
//	}
//	return 0;
//}