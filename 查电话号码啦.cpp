////#include <iostream>
////#include <string>
////#include <vector>
////#include <algorithm>
////using namespace std;
//// 
////int main()
////{
////	int a, b;
////	while (cin >> a >> b)
////	{
////		vector<string> v;
////		vector<string> ret;
////		for (int i = 0; i < a; ++i)
////		{
////			string tmp;
////			cin >> tmp;
////			v.push_back(tmp);
////		}
////		for (int i = 0; i < b; ++i)
////		{
////			string tmp;
////			cin >> tmp;
////			ret.push_back(tmp);
////		}
////		int anx = 0;
////		for (auto &e:ret)
////		{
////			for (auto & k : v)
////			{
////				if (k.find(e) != string::npos)
////				{
////					anx++;
////				}
////			}
////			cout << anx << endl;
////			anx = 0;
////		}
////	}
////	system("pause"); 
////	return 0;
////}
//
// 
//
////map去重+双hash+散列表，内存差点炸了，精打细算一下刚刚好
///*author: revolIA*/
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
//typedef long long ll;
//typedef pair<unsigned int, unsigned int> pll;
//inline pll operator - (pll a, pll b)
//
//{ 
//	return make_pair((a.first - b.first), (a.second - b.second));
//}
//inline pll operator * (pll a, pll b) 
//
//{
//	return make_pair((a.first *  b.first), (a.second * b.second));
//}
//inline pll operator + (pll a, pll b) 
//{ 
//	return make_pair((a.first + b.first), (a.second + b.second)); 
//}
//inline pll operator + (pll a, int b) 
//{
//	return make_pair((a.first + b), (a.second + b));
//}
//const int maxn = 1e6 + 7;
//const pll p = { 23,2333 };
//int n, m;
//char opt[20];
//int head[maxn], Next[maxn], cnt;
//pair<pll, int> val[maxn];
//int Find(pll x) {
//	int pos = (int)(x.first*x.second%maxn);
//	for (int i = head[pos]; i; i = Next[i])if (x == val[i].first)
//		return i;
//	return -1;
//}
//void Insert(pll x) {
//	int pos = Find(x);
//	if (~pos) {
//		val[pos].second++;
//		return;
//	}
//	pos = (int)(x.first*x.second%maxn);
//	val[++cnt] = { x,1 };
//	Next[cnt] = head[pos];
//	head[pos] = cnt;
//}
//map<pll, bool> vis, tvis;
//int main() {
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++) {
//		scanf("%s", opt + 1);
//		pll ans = { 0,0 };
//		for (int i = 1; i <= 11; i++)ans = ans * p + opt[i];
//		if (tvis.count(ans))
//			continue;
//		tvis[ans] = 1;
//		vis.clear();
//		for (int l = 1; l <= 11; l++) {
//			ans = { 0,0 };
//			for (int r = l; r <= 11; r++) {
//				ans = ans * p + opt[r];
//				if (!vis.count(ans)) {
//					++vis[ans];
//					Insert(ans);
//				}
//			}
//		}
//	}
//	for (int i = 1; i <= m; i++) {
//		scanf("%s", opt + 1);
//		pll tmp = { 0,0 };
//		for (int j = 1; opt[j]; j++) {
//			tmp = tmp * p + opt[j];
//		}
//		int pos = Find(tmp);
//		printf("%d\n", pos != -1 ? val[pos].second : 0);
//	}
//	return 0;
//}