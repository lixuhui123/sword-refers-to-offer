//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//class Solution {
//public:
//	/**
//	 * ���ݸ��������ݣ�ȷ������������
//	 * @param size int���� ����Ƭ��������ȡֵ��Χ: 2 �� 1e6
//	 * @param swap_indexes int���Ͷ�ά���� ø����ʱ�������Ļ���Ƭ�ε�λ�á�swap_indexes[n][0] != swap_indexes[n][1] һ������������ȡֵ��Χ��[1, 1e6], ������Ϊ2
//	 * @param swap_indexesRowLen int swap_indexes��������
//	 * @param swap_indexesColLen int* swap_indexes��������
//	 * @return int����
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