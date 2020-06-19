//#include <iostream>
//#include<list>
//#include <unordered_map>
//#include <string>
//#include <stack>
//using namespace std;
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
//			return 0;
//		}
//		else
//		{
//			list<pair<int, int>>::iterator listit = hashit->second;
//			pair<int, int> kv = *listit;
//			_lrulist.erase(listit);
//			_lrulist.push_back(kv);
//			hashmap[key] = _lrulist.begin();
//			return kv.second;
//		}
//	}
//	void put(int key, int value)
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
//			_lrulist.push_back(kv);
//			hashmap[key] = _lrulist.begin();
//		}
//	}
//
//
//private:
//	list<pair<int, int> > _lrulist;
//	unordered_map<int, list<pair<int, int>>::iterator> hashmap;
//	size_t capacity;
//};
///*
//4 2
//Window1 NormalWindow
//Window2 FullWindow
//Window3 PopWindow
//Window4 FullWindow
//8
//Show Window1
//Show Window2
//Check Window1
//Show Window3
//Show Window4
//Close Window3
//Show Window3
//CloseAllWindow
//*/
//
//class windows
//{
//public:
//	
//};
//int main()
//{
//	int N, M;
//	unordered_map<int, string> map;
//	map[0] = "NormalWindow";
//	map[1] = "FullWindow";
//	map[2] = "PopWindow";
//
//	unordered_map<int, string> show;
//	show[0] = "Show";
//	show[1] = "Check";
//	show[2] = "Close";
//	show[3] = "CloseAllWindow";
//
//	while (cin>>N>>M)
//	{
//		lru _lru(M);
//		unordered_map<int, int> suc;//窗口名，窗口类型
//		for (int i = 0; i < N; ++i)
//		{
//			string str1;
//			string str2;
//			cin >> str1;
//			cin >> str2;
//			for (auto &e : map)
//			{
//				if (e.second == str2)
//				{
//					int tmp = stoi(str1.substr(6));
//					 suc[tmp]=e.first;
//				}
//			}
//		}
//		int s;
//		cin >> s;
//		 vector<pair<int,int>> shuru;//窗口操作，窗口名
//		for (int i = 0; i < s; ++i)
//		{
//			string str1;
//			string str2;
//			int winnum;
//			cin >> str1;
//			if (str1 != "CloseAllWindow")
//			{
//				cin >> str2;
//				winnum = stoi(str2.substr(6));
//				for (auto &e : show)
//				{
//					if (e.second == str1)
//					{
//						shuru.push_back(pair<int, int>(e.first,winnum));
//					}
//				}
//				
//			}
//			else
//			{
//				shuru.push_back(pair<int, int>(3, -1));
//			}
//			 
//		}
//		//输出
//		vector<pair<int,int>> run;//维护被操作的窗口，名字和类型
//		for (auto &e : shuru)
//		{
//			run.push_back(pair<int,int>(e.first, e.second));
//			if (e.first == 0)
//			{
//				//show
//				if (run.back().first == e.second)
//				{
//					//在最上层显示
//					string tmp = "Window";
//					string num = to_string(e.second);
//						cout << tmp + num << endl;
//				}
//				else
//				{
//					int mem;
//					if (mem=_lru.get(e.second))
//					{
//						cout << "LoadFromPool"<<endl;
//						string tmp = "Window";
//						string num = to_string(mem);
//						cout << tmp + num << endl;
//					}
//					else
//					{
//						cout << "False" << endl;
//
//					}
//				}
//
//			}
//			if (e.first == 1)
//			{
//				//check
//				if (run.back().first == e.second)
//				{
//					//正在显示无效
//					cout << "True" << endl;
//					run.erase(run.end() - 1);
//				}
//				else
//				{
//					cout << "False" << endl;
//				}
//			}
//			if (e.first == 2)
//			{
//				//关闭
//				if (run.back().first == e.second)
//				{
//					//正在显示
//					run.erase(run.end() - 1);
//					_lru.put(e.second,-1);
//					string tmp = "Window";
//					string num = to_string(run.back().first);
//					cout << tmp + num << endl;
//				}
//			}
//			if (e.first == 2)
//			{
//				cout << "NULL" << endl;
//			}
//		}
//	}
//
//	system("pause"); 
//	return 0;
//}