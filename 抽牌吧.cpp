//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <functional>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> v(n);
//		for (int i = 0; i < n; ++i)
//		{
//			cin >> v[i];
//		}
//		sort(v.begin(),v.end(),greater<int>());
//
//		//≈£≈£œ»∞…
//		long long niu = 0;
//		long long yang = 0;
//		for (int i = 0; i < n; ++i)
//		{
//			if (i % 2 == 0)
//			{
//				niu += v[i];
//			}
//			else
//			{
//				yang += v[i];
//			}
//		}
//		cout << niu - yang << endl;
//	}
//	system("pause"); 
//	return 0;
//}