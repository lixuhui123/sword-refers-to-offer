//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int num = 0;
//	while (cin >> num)
//	{
//		vector<int> v;
//		int ret = 0;
//		int i = 0;
//		int j = 0;
//		int z = 0;
//		for (int k = 0; k < num; ++k)
//		{
//			int tmp;
//			cin >> tmp;
//			v.push_back(tmp);
//		}
//		
//		for (i = 0; i < num; ++i)
//		{
//			int left = 0;
//			int right = 0;
//			int flag;
//			flag = v[i];
//			for (j=i-1;j>=0;--j)
//			{
//				if (v[j] >= flag)
//				{
//					left++;
//				}
//				else
//				{
//					break;
//				}
//			}
//			for (z = i + 1; z < num; ++z)
//			{
//				if (v[z] >= flag)
//				{
//					right++;
//				}
//				else
//				{
//					break;
//				}
//			}
//			int sum = left + right;
//			
//			if (sum == 0)
//			{
//				if (flag > ret)
//				{
//					ret =flag;
//				}
//			}
//			else
//			{
//				int mut = flag * (left + right + 1);
//				if (mut > ret)
//				{
//					ret = mut;
//				}
//			}
//		}
//		cout << ret << endl;
//
//
//	}
//	system("pause"); 
//	return 0;
//}