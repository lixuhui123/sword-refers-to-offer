///* ��̬�滮��ģ�±������⣬�����Ϊ��x+y����Ʒ��
//����x�ֵ��ݻ�Ϊa��y�ֵ��ݻ�Ϊb�������ݻ�Ϊk���ʱ���װ��һ���ж����ֽⷨ�� */
// 
//#include <iostream>
//
//#include <cstring>
//
//using namespace std;
//
//
//
//int K, A, X, B, Y;
//
//int dp[201][1001];
//
//int p[201];
//
//
//
//int main()
//
//{
//
//	while (cin >> K)
//
//	{
//
//		cin >> A >> X >> B >> Y;
//
//		memset(dp, 0, sizeof(dp));
//
//		dp[0][0] = 1;
//
//		for (int i = 1; i <= X; i++)
//
//			p[i] = A;
//
//		for (int j = X + 1; j <= X + Y; j++)
//
//			p[j] = B;
//
//		for (int i = 1; i <= X + Y; i++)
//
//			for (int j = 0; j <= K; j++)
//
//			{
//
//				if (j >= p[i])
//
//					dp[i][j] = (dp[i - 1][j] % 1000000007 + dp[i - 1][j - p[i]] % 1000000007) % 1000000007;
//
//				else
//
//					dp[i][j] = dp[i - 1][j] % 1000000007;
//
//			}
//
//		cout << dp[X + Y][K] % 1000000007 << endl;
//
//	}
//
//}


/* ���ӣ�https://www.nowcoder.com/questionTerminal/6acc6504df67406c98a75f5575e4b94a
��Դ��ţ����

�ȹ��Ŀӣ����ȶ������⣬���� '/'����Ϳ��ɫ '\'����Ϳ��ɫ
����˼�룺��������ά���黹ԭ��ԭ���հ��������ȫ��Ϊ'X'��Ϊ��ֻ����������޸ģ�����������ַ�������ÿһ���ַ��������'B'��������ɨ�裬����'B'����'G'�������������ɨ������У������е�B�滻ΪX��G�滻��Y������������ֹͣ������ַ���'Y'����������ɨ�裬����Y����G�����������е�Y�滻��X��G�滻��B��������ֹͣɨ�裻����ַ���G�����Ƚ����滻��B����'B'����ʽɨ�裬�ٽ����滻��Y����Y�Ĵ���ʽɨ�衣ÿִ��һ�����»�������ɨ�裬��������+1 */
 

//#include <iostream>
//#include <vector>
//using namespace std;
//
//void refix(vector<vector<char>>& arr, int& n, int& m, int x, int y, int& ans) {//B Y
//	char ch = arr[x][y];
//	arr[x][y] = 'X';
//	int i, j;
//
//	if (ch == 'B') {//���»���
//		i = x + 1; j = y - 1;
//		while (i<n && j>-1) {
//			if (arr[i][j] == ch) arr[i][j] = 'X';
//			else if (arr[i][j] == 'G') arr[i][j] = 'Y';
//			else break;
//			++i, --j;
//		}
//	}
//	else {//���»���
//		i = x + 1; j = y + 1;
//		while (i < n && j < m) {
//			if (arr[i][j] == ch) arr[i][j] = 'X';
//			else if (arr[i][j] == 'G') arr[i][j] = 'B';
//			else break;
//			++i, ++j;
//		}
//	}
//
//	ans += 1;
//}
//
//int main() {
//	int N, M;
//	cin >> N >> M;
//	vector<vector<char>> arr(N, vector<char>(M));
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j)
//			cin >> arr[i][j];
//	}
//	int ans = 0;
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j) {
//			if (arr[i][j] == 'X') continue;
//			else if (arr[i][j] == 'B') refix(arr, N, M, i, j, ans);
//			else if (arr[i][j] == 'Y') refix(arr, N, M, i, j, ans);
//			else {//��ǰΪ'G'
//				arr[i][j] = 'B'; refix(arr, N, M, i, j, ans);
//				arr[i][j] = 'Y'; refix(arr, N, M, i, j, ans);
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//
//}