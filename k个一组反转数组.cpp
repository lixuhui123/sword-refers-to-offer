//#include <iostream>
//#include <vector>
//using namespace std;
//void reverse(vector<int> &v,vector<int>::iterator a, vector<int>::iterator b)
//{
//	//不用担心边界
//	while (a < b)
//	{
//		int tmp = *a;
//		*a = *b;
//		*b = tmp;
//		++a;
//		--b;
//	}
//}
//int main()
//{
//	vector<int> v{ 1,1,2,3,4,5 };
//	int a = 3;
//	for (auto it=v.begin();v.end()-it >= 3; )
//	{
//		reverse(v, it, it + a);
//		it = it + a + 1;
//	}
//	for (auto &e : v)
//	{
//		cout << e << " ";
//	}
//	system("pause"); 
//	return 0;
//}