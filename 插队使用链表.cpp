//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <list>
//#include <map>
//using namespace std;
//
//class Solution {
//public:
//	/**
//	 * �����ж��ٸ������ղ����Լ�ԭ����λ����
//	 * @param n int���� �����ܳ�
//	 * @param cutIn int����vector ���λ��ӵ���ǰ�����˵ı��
//	 * @return int����
//	 */
//	int countDislocation(int n, vector<int>& cutIn) {
//		// write code here
//		//map.count(1),���ش��ڵĸ���
//		/* ��������mapȥ�أ���������������ж�λ�ã������ж����Ԫ�� */
//		int pos = 1;
//		int m_max = 0;
//		int ret = 0;
//		map<int, int> m;
//		for (int i=cutIn.size()-1;~i;--i)
//		{
//			if (!m.count(cutIn[i]))
//			{
//				//������e
//				m[cutIn[i]] = 1;
//				m_max = max(m_max, cutIn[i]);
//				if (cutIn[i] == pos)
//				{
//					ret++;//����ȷλ����
//				}
//				++pos;
//			}
//		
//		}
//		return m_max - ret;
//	}
//};
//
//int main()
//{
//	vector<int> v{ 10,4,6,5,9,7,3,3,9,10 };
//	Solution test;
//	cout<<test.countDislocation(10, v);
//	system("pause"); 
//	return 0;
//}