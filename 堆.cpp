//// range heap example
//#include <iostream>     // std::cout
//#include <algorithm>    // std::make_heap, std::pop_heap, std::push_heap, std::sort_heap
//#include <vector>       // std::vector
//using namespace std;
//int main() {
//	//int myints[] = { 10,20,30,5,15 };
//	//std::vector<int> v(myints, myints + 5);
//	////Ĭ�ϲ�������ѣ���С��������,less�Ǵ���ѣ�great��С���ѣ��Ӵ�С
//	//std::make_heap(v.begin(), v.end(), less<int>());
//	//std::cout << "initial max heap   : " << v.front() << '\n';
// //  //ע��pop_heap�ǽ����Ƶ�����β��Ȼ�����pop_back
//	//std::pop_heap(v.begin(), v.end(), less<int>());
//
//	//v.pop_back();
//
//	//std::cout << "max heap after pop : " << v.front() << '\n';
//	////push_heapҲһ�����ŵ�����β�������ά����������β�������ѵĹ�ϵ
//	//v.push_back(99); 
//	//std::push_heap(v.begin(), v.end(), less<int>());
//	//std::cout << "max heap after push: " << v.front() << '\n';
//
//	//std::sort_heap(v.begin(), v.end(), less<int>());
//
//	//std::cout << "final sorted range :";
//	//for (unsigned i = 0; i < v.size(); i++)
//	//	std::cout << ' ' << v[i];
//
//	//std::cout << '\n';
//
//	vector<pair<int, int>> v;
//	v.push_back(pair<int, int>(1, 4));
//	v.push_back(pair<int, int>(2, 5));
//	make_heap(v.begin(), v.end(), less<pair<int,int>>());
//	for (auto & e : v)
//	{
//		cout << e.first << " ";
//	}
//
//
//	system("pause");
//	return 0;
//}