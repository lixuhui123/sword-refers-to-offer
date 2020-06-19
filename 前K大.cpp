////#include <iostream>
////#include <string>
////#include <vector>
////#include <algorithm>
////#include <set>
////using namespace std;
////int main()
////{
////	int num;
////	while (cin >> num)
////	{
////		if (num == 0)
////		{
////			continue;
////		}
////		set<int> ret;
////		for (int i = 0; i < num; ++i)
////		{
////			int tmp;
////			cin >> tmp;
////			ret.insert(tmp);
////		}
////		int pos;
////		cin >> pos;
////		int k = 1;
////		for (auto &e : ret)
////		{
////			if (k == pos)
////			{
////				cout << e << endl;
////				break;
////			}
////			++k;
////		}
////	}
////	system("pause"); 
////	return 0;
////}
//
//
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
//
//class lru
//{
//public:
//	lru(int cap)
//	{
//		capacity = cap;
//	}
//	int get(int key)
//	{
//		auto hashit = hashmap.find(key);
//		if (hashit == hashmap.end())
//		{
//			return -1;
//		}
//		else
//		{
//			list<pair<int, int>>::iterator listit = hashit->second;
//			pair<int, int> kv = *listit;
//			_lrulist.erase(listit);
//			_lrulist.push_front(kv);//
//			hashmap[key] = _lrulist.begin();
//			return kv.second;
//		}
//	}
//	void set(int key, int value)
//	{
//		auto hashit = hashmap.find(key);
//		if (hashit == hashmap.end())
//		{
//			if (hashmap.size() == capacity)
//			{
//				hashmap.erase(_lrulist.back().first);
//				_lrulist.pop_back();
//			}
//			_lrulist.push_front(make_pair(key, value));
//			hashmap[key] = _lrulist.begin();
//		}
//		else
//		{
//			list<pair<int, int>>::iterator listit = hashit->second;
//			pair<int, int> kv = *listit;
//			kv.second = value;
//			_lrulist.erase(listit);
//			_lrulist.push_front(kv);
//			hashmap[key] = _lrulist.begin();
//		}
//	}
//
//
//private:
//	list<pair<int, int>> _lrulist;
//	unordered_map<int, list<pair<int, int>>::iterator> hashmap;
//	size_t capacity;
//};
//int main()
//{
//	int N, K;
//	while (cin>>N>>K)
//	{
//		vector<int> ret;
//		lru li(K);
//		for (int i = 0; i < N; ++i)
//		{
//			int opt;
//			cin >> opt;
//			if (opt == 1)
//			{
//				int a, b;
//				cin >> a >> b;
//				li.set(a, b);
//			}
//			else
//			{
//				int tmp;
//				cin >> tmp;
//				tmp = li.get(tmp);
//				ret.push_back(tmp);
//			}
//		}
//		for (auto & e : ret)
//		{
//			cout << e << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}