// 
//#include<iostream>
//using namespace std;
//int n, m;
////�����һ���s���ɿ���һ����Ҫ���ٸ����ٸ��ɿ���
//int sum(int s) {
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		sum += s;
//		s = (s + 1) >> 1;//����ȡ��
//	}
//	return sum;
//}
////���ֲ���
//int fun() {
//	if (n == 1) return m;
//	int low = 1;
//	int high = m;//��һ����ɿ���һ���Ǵ��ڵ���1С�ڵ���m��
//	while (low < high) {
//		int mid = (low + high + 1) >> 1;//����ȡ��
//		if (sum(mid) == m) return mid;//�����һ���mid���ɿ������ոպó��������ɿ�������ôֱ�ӷ���
//		else if (sum(mid) < m) {
//			low = mid;
//		}
//		else {
//			high = mid - 1;
//		}
//	}
//	return high;
//}
//int main()
//{
//	cin >> n >> m;
//	int res = fun();
//	cout << res << endl;
//	return 0;
//}