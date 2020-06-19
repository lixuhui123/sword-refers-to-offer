//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//class Solution {
//private:
//	vector<int> min;
//	vector<int> max;
//public:
//	void Insert(int num)
//	{
//		if (((min.size() + max.size()) & 1) == 0)//ż��ʱ ��������С��
//		{
//			if (max.size() > 0 && num < max[0])
//			{
//				// push_heap (_First, _Last),Ҫ���������м������ݣ��ٵ���push_heap ()
//				max.push_back(num);//�Ƚ�Ԫ��ѹ������
//				push_heap(max.begin(), max.end(), less<int>());//��������
//				num = max[0];//ȡ�����ѵ����ֵ
//				//pop_heap(_First, _Last)��Ҫ�ȵ���pop_heap()����������ɾ������
//				pop_heap(max.begin(), max.end(), less<int>());//ɾ�����ѵ����ֵ
//				max.pop_back(); //��������ɾ��
//			}
//			min.push_back(num);//ѹ����С��
//			push_heap(min.begin(), min.end(), greater<int>());//������С��
//		}
//		else//����ʱ�򣬷�������
//		{
//			if (min.size() > 0 && num > min[0])
//			{
//				// push_heap (_First, _Last),Ҫ���������м������ݣ��ٵ���push_heap ()
//				min.push_back(num);//��ѹ����С��
//				push_heap(min.begin(), min.end(), greater<int>());//������С��
//				num = min[0];//�õ���С�ѵ���Сֵ���Ѷ���
//				//pop_heap(_First, _Last)��Ҫ�ȵ���pop_heap()����������ɾ������
//				pop_heap(min.begin(), min.end(), greater<int>());//ɾ����С�ѵ����ֵ
//				min.pop_back(); //��������ɾ��
//			}
//			max.push_back(num);//ѹ������
//			push_heap(max.begin(), max.end(), less<int>());//��������
//		}
//	}
//	/*��ȡ��λ��*/
//	double GetMedian()
//	{
//		int size = min.size() + max.size();
//		if (size <= 0) //û��Ԫ�أ��׳��쳣
//			return 0;//throw exception("No numbers are available");
//		if ((size & 1) == 0)//ż��ʱ��ȥƽ��
//			return ((double)(max[0] + min[0]) / 2);
//		else//������ȥ��С�ѣ���Ϊ��С�����ݱ��ֺ�����һ���࣬���߱����Ѷ�1��
//			return min[0];
//	}
//};
//
//int main()
//{
//	Solution test;
//	test.Insert(1);
//	test.Insert(8);
//	test.Insert(3);
//	test.Insert(4);
//	test.Insert(1);
//	cout<<test.GetMedian()<<endl;
//	system("pause"); 
//	return 0;
//}