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
//			//�ڲ��鼯���������ĸ�
//
//			while (_ufs[n] >= 0)
//			{
//				n = _ufs[n];
//			}
//			return n;
//		}
//		void Union(int x1, int x2)
//		{
//			//����ӳ���ϵ��ɲ��鼯�ĺϲ�
//			int root1 = FindRoot(x1);
//			int root2 = FindRoot(x2);
//
//			if (root1 != root2)
//			{
//				_ufs[root1] += _ufs[root2];
//				_ufs[root2] = root1;
//			}
//			//����ͬ�ĸ���ʱ��˵���Ѿ��ϲ�����
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
//	 * @param filenames string�ַ���һά���� �����ļ���
//	 * @param filenamesLen int filenames���鳤��
//	 * @param relations string�ַ�����ά���� �ļ�������ϵ
//	 * @param relationsRowLen int relations��������
//	 * @param relationsColLen int* relations��������
//	 * @return int����
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