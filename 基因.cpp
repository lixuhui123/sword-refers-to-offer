//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//class Solution {
//public:
//	/**
//	 * 根据给定的数据，确定病毒的类型
//	 * @param size int整型 基因片段数量，取值范围: 2 到 1e6
//	 * @param swap_indexes int整型二维数组 酶处理时，交换的基因片段的位置。swap_indexes[n][0] != swap_indexes[n][1] 一定成立。行数取值范围：[1, 1e6], 列数衡为2
//	 * @param swap_indexesRowLen int swap_indexes数组行数
//	 * @param swap_indexesColLen int* swap_indexes数组列数
//	 * @return int整型
//	 */
//	int determine_virus_type(int size, int swap_indexes[][2], int swap_indexesRowLen, int* swap_indexesColLen) {
//		// write code here
//		vector<int> v;
//		int tmp = size;
//		for (int i = 0; i < size; ++i)
//		{
//			v.push_back(tmp);
//			--tmp;
//		}
//		for (int i = 0; i < swap_indexesRowLen; ++i)
//		{
//			int tmp = v[swap_indexes[i][0]];
//			v[swap_indexes[i][0]] = v[swap_indexes[i][1]];
//			v[swap_indexes[i][1]] = tmp;
//		}
//		int ret = 0;
//		for (int i = 0; i < size; ++i)
//		{
//			int tmp = v[i];
//			for (int j = i + 1; j < size; ++j)
//			{
//				if (tmp < v[j])
//				{
//					ret++;
//				}
//			}
//		}
//		cout << ret;
//		if (ret % 2 == 0)
//		{
//			return 2;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//};
//int main()
//{
//	int tmp[4][2] = { {2,4},{1,4},{0,3} ,{0,3} };
//	Solution test;
//	int l = 2;
//	cout<<test.determine_virus_type(5, tmp, 4, &l);
//	system("pause"); 
//	return 0;
//}