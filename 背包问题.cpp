///* 动态规划，模仿背包问题，问题简化为有x+y种物品，
//其中x种的容积为a，y种的容积为b，背包容积为k，问背包装满一共有多少种解法？ */
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


/* 链接：https://www.nowcoder.com/questionTerminal/6acc6504df67406c98a75f5575e4b94a
来源：牛客网

踩过的坑：首先读懂题意，其中 '/'必须涂蓝色 '\'必须涂黄色
基本思想：将所给二维数组还原成原来空白情况，即全部为'X'，为此只需遍历（并修改）数组的所有字符。对于每一个字符，如果是'B'就向左下扫描，遇到'B'或者'G'则继续（在左下扫描过程中，将所有的B替换为X，G替换成Y），否则立即停止；如果字符是'Y'，就向右下扫描，遇到Y或者G继续（将所有的Y替换成X，G替换成B），否则停止扫描；如果字符是G，则先将其替换成B，按'B'处理方式扫描，再将其替换成Y，按Y的处理方式扫描。每执行一次左下或者右下扫描，操作次数+1 */
 

//#include <iostream>
//#include <vector>
//using namespace std;
//
//void refix(vector<vector<char>>& arr, int& n, int& m, int x, int y, int& ans) {//B Y
//	char ch = arr[x][y];
//	arr[x][y] = 'X';
//	int i, j;
//
//	if (ch == 'B') {//左下画线
//		i = x + 1; j = y - 1;
//		while (i<n && j>-1) {
//			if (arr[i][j] == ch) arr[i][j] = 'X';
//			else if (arr[i][j] == 'G') arr[i][j] = 'Y';
//			else break;
//			++i, --j;
//		}
//	}
//	else {//右下画线
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
//			else {//当前为'G'
//				arr[i][j] = 'B'; refix(arr, N, M, i, j, ans);
//				arr[i][j] = 'Y'; refix(arr, N, M, i, j, ans);
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//
//}