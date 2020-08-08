//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
// 
//	class UnionFindSet
//	{
//	public:
//		UnionFindSet(size_t n)
//		{
//			_ufs.resize(n, -1);
//		}
//		int FindRoot(int n)
//		{
//			//在并查集里面找它的根
//
//			while (_ufs[n] >= 0)
//			{
//				n = _ufs[n];
//			}
//			return n;
//		}
//		void Union(int x1, int x2)
//		{
//			//根据映射关系完成并查集的合并
//			int root1 = FindRoot(x1);
//			int root2 = FindRoot(x2);
//
//			if (root1 != root2)
//			{
//				_ufs[root1] += _ufs[root2];
//				_ufs[root2] = root1;
//			}
//			//有相同的根的时候，说明已经合并过了
//		}
//
//		size_t Size()
//		{
//			size_t n = 0;
//			for (auto & e : _ufs)
//			{
//				if (e < 0)
//				{
//					++n;
//				}
//			}
//			return n;
//		}
//
//	private:
//		vector<int> _ufs;
//	};
//	 
// 
//class Solution {
//public:
//	/**
//	 *
//	 * @param filenames string字符串一维数组 所有文件名
//	 * @param filenamesLen int filenames数组长度
//	 * @param relations string字符串二维数组 文件依赖关系
//	 * @param relationsRowLen int relations数组行数
//	 * @param relationsColLen int* relations数组列数
//	 * @return int整型
//	 */
//	int split_package(string* filenames, int filenamesLen, string** relations, int relationsRowLen, int* relationsColLen) {
//		unordered_map<string, int> mp;
//		vector<vector<int>> v;
//		for (int i = 0; i < filenamesLen; ++i)
//		{
//			mp[filenames[i]] = i;
//		}
//		UnionFindSet ret(filenamesLen);
//		for (int i = 0; i < relationsRowLen; ++i)
//		{
//			vector<int> tmp;
//			for (int j = 1; j < *relationsColLen; ++j)
//			{
//				ret.Union(mp[relations[i][j - 1]], mp[relations[i][j]]);
//			}
//		}
//		return ret.Size();
//		
//	}
//};
//int main()
//{
//	
//	system("pause"); 
//	return 0;
//}