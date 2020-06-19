//#include <iostream>
//#include <vector>
//using namespace std;
//void sort(vector<int>& arr, int low, int high)
//{
//	if (low >= high)
//		return;
//	int a = low;
//	int b = high;
//	int main = arr[a];
//	while (a < b)
//	{
//		while (a < b && main <= arr[b])
//			--b;
//		arr[a] = arr[b];
//		while (a < b &&main >= arr[a])
//			++a;
//		arr[b] = arr[a];
//	}
//	arr[a] = main;
//	sort(arr, low, a - 1);
//	sort(arr, a + 1, high);
//}
//int main()
//{
//	
//	vector<int> arr;
//	int tmp;
//	while (cin>>tmp)
//	{
//		arr.push_back(tmp);
//		
//	}
//	sort(arr, 0, arr.size() - 1);
//	for (auto &e : arr)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	arr.clear();
//	//system("pause");
//	return 0;
//}