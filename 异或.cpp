//#include <iostream>
//#include <vector>
//#include <stdio.h>
//using namespace std;
//int main()
//{
//	int n, m;
//	vector<int> m_v;
//	while (cin>>n>>m)
//	{
//		for (int i = 0; i < n; ++i)
//		{
//			int tmp;
//			//cin >> tmp;
//			scanf_s("%d", &tmp);
//			m_v.push_back(tmp);
//		}
//		//两两异或
//		int ret=0;
//		for (int i = 0; i < n - 1; ++i)
//		{
//			for (int j = i + 1; j < n; ++j)
//			{
//				int tmp = m_v[i] ^ m_v[j];
//				if (tmp > m)
//				{
//					ret++;
//				}
//			}
//		}
//		cout << ret << endl;
//		m_v.clear();
//	}
//	system("pause"); 
//	return 0;
//}
//
//#include <bits/stdc++.h>
//using namespace std;
//int eular(int n)
//{
//	int res = 1;
//	for (int i = 2; i*i <= n; i++) {
//		if (n%i == 0) {
//			n /= i, res *= i - 1;//保证i一定是素数
//			while (n%i == 0)
//				n /= i, res *= i;
//		}
//	}
//	if (n > 1)
//		res *= n - 1;
//	return res;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF) {
//		printf("%d\n", eular(n));
//	}
//	return 0;
//}
//
//class Solution {
//public:
//	int myAtoi(string str)
//	{
//		int i = 0;//位置
//		long long res = 0;//输出结果
//		int bol = 1;//符号
//		while (i < str.size() && str[i] == ' ')
//			++i;//找到第一个非空格的字符
//		if (i == str.size())
//			return 0;
//		if (str[i] == '-')
//		{
//			bol = -1;
//			++i;
//		}//运算符正负号
//		else if (str[i] == '+')
//		{
//			bol = 1;
//			++i;
//		}
//		while (i < str.size() && str[i] >= '0' && str[i] <= '9')
//		{
//			res = res * 10 + (str[i++] - '0');
//			if (res >= 2147483648)
//			{
//				if (bol == 1)
//					return INT_MAX;
//				else
//					return INT_MIN;
//			}
//		}
//		return res * bol;
//	}
//};
//
//
//class Solution {
//public:
//	int leftfind(vector<int>& nums, int target)
//	{
//
//		int length = nums.size();
//		if (length == 0)
//		{
//			return -1;
//		}
//		int left = 0;
//		int right = length;
//
//		while (left < right)//会引起left=right的时候跳出，left位没有被检测
//		{
//			int mid = (left + right) / 2;
//
//			if (nums[mid] == target)
//			{
//				right = mid;
//
//			}
//			else if (nums[mid] > target)
//			{
//				right = mid;
//			}
//			else if (nums[mid] < target)
//			{
//				left = mid + 1;
//			}
//		}
//		if (left == length)
//		{
//			return -1;
//		}
//		return nums[left] == target ? left : -1;
//
//	}
//	int rightfind(vector<int>& nums, int target)
//	{
//		int length = nums.size();
//		if (length == 0)
//		{
//			return -1;
//		}
//		int left = 0;
//		int right = length;
//
//		while (left < right)//左开右闭
//		{
//			int mid = (left + right) / 2;
//
//			if (nums[mid] == target)
//			{
//				left = mid + 1;//往右边赶
//			}
//			else if (nums[mid] < target)
//			{
//				left = mid + 1;
//			}
//			else if (nums[mid] > target)
//			{
//				right = mid;
//			}
//
//		}
//
//		if (left == 0)
//		{
//			return -1;
//		}
//		return nums[left - 1] == target ? left - 1 : -1;
//	}
//	vector<int> searchRange(vector<int>& nums, int target)
//	{
//		//二分查找，寻找左边界
//		int left = leftfind(nums, target);
//		int right = rightfind(nums, target);
//		vector<int> ret;
//		if ((left == -1) || (right == -1))
//		{
//			ret.push_back(-1);
//			ret.push_back(-1);
//
//		}
//		else
//		{
//			ret.push_back(left);
//			ret.push_back(right);
//		}
//
//		return ret;
//	}
//};
//
///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// * };
// */
//class Solution {
//public:
//	vector<int> rightSideView(TreeNode* root)
//	{
//		//层序遍历
//		vector<int> ok;
//
//		vector<vector<int>> ret;
//		if (!root)
//			return ok;
//		queue<TreeNode *> qu;
//		TreeNode * cur = root;
//		qu.push(cur);
//		int levesize = 1;
//		vector<int> v;
//		while (!qu.empty())
//		{
//			for (int i = 0; i < levesize; ++i)
//			{
//				cur = qu.front();
//				v.push_back(cur->val);
//				qu.pop();
//				if (cur->left)
//				{
//					qu.push(cur->left);
//				}
//				if (cur->right)
//				{
//					qu.push(cur->right);
//				}
//			}
//			ret.push_back(v);
//			levesize = qu.size();
//			v.clear();
//
//		}
//
//
//
//
//
//		for (auto & e : ret)
//		{
//			int size = e.size();
//			if (size == 1)
//			{
//				ok.push_back(e[0]);
//			}
//			if (size > 1)
//			{
//				ok.push_back(e[size - 1]);
//			}
//		}
//		return ok;
//	}
//};
//
//
//
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode(int x) : val(x), next(NULL) {}
// * };
// */
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head) {
//		if (!head)
//			return NULL;
//		ListNode *cur = head;
//		ListNode * tmp = head->next;
//		while (tmp)
//		{
//			cur->next = tmp->next;
//			tmp->next = head;
//			head = tmp;
//			tmp = cur->next;
//
//		}
//		return head;
//	}
//};
//
//
//class Solution {
//public:
//	int firstUniqChar(string s) {
//		int count[128] = { 0 };
//		int size = s.size();
//		for (int i = 0; i < size; ++i)
//		{
//			count[s[i]] += 1;
//		}
//		for (int i = 0; i < size; ++i)
//		{
//			if (count[s[i]] == 1)
//				return i;
//		}
//		return -1;
//
//	}
//};
//
//
//class Solution {
//public:
//	void rotate(vector<int>& nums, int k)
//	{
//		int* a = new int[nums.size()];
//		for (int i = 0; i < nums.size(); i++) {
//			a[(i + k) % nums.size()] = nums[i];
//		}
//		for (int i = 0; i < nums.size(); i++) {
//			nums[i] = a[i];
//		}
//	}
//
//};
//
//static int nextp[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
//class Solution {
//public:
//	void DFS(vector<vector<char>>& grid, int row, int col, int x, int y)
//	{
//		grid[x][y] = 'x';
//		for (int i = 0; i < 4; ++i)
//		{
//			int nx = x + nextp[i][0];
//			int ny = y + nextp[i][1];
//			if (nx >= row || nx < 0 || ny >= col || ny < 0)
//			{
//				continue;
//			}
//			if (grid[nx][ny] == '1')
//			{
//				DFS(grid, row, col, nx, ny);
//			}
//		}
//
//	}
//	int numIslands(vector<vector<char>>& grid)
//	{
//		if (grid.empty())
//		{
//			return 0;
//		}
//		int ret = 0;
//		int row = grid.size();
//		int col = grid[0].size();
//		int i, j;
//		for (i = 0; i < row; ++i)
//		{
//			for (j = 0; j < col; ++j)
//			{
//				if (grid[i][j] == '1')
//				{
//					DFS(grid, row, col, i, j);
//					ret++;
//				}
//			}
//		}
//		return ret;
//
//	}
//};
//
//static int nextp[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
//class Solution {
//	void DFS(vector<vector<char>>& board, int row, int col, int x, int y)
//	{
//		board[x][y] = '@';
//		for (int i = 0; i < 4; ++i)
//		{
//			int nx = x + nextp[i][0];
//			int ny = y + nextp[i][1];
//			if (nx >= row || nx < 0 || ny >= col || ny < 0)
//			{
//				continue;
//			}
//			if (board[nx][ny] == 'O')
//			{
//				DFS(board, row, col, nx, ny);
//			}
//		}
//	}
//public:
//	void solve(vector<vector<char>>& board) {
//		if (board.empty())
//		{
//			return;
//		}
//		//遍历第一行，第一列，最后一行，最后一列
//		int row = board.size();
//		int col = board[0].size();
//
//		for (int i = 0; i < row; ++i)
//		{
//			if (board[i][0] == 'O')
//			{
//				DFS(board, row, col, i, 0);
//			}
//			if (board[i][col - 1] == 'O')
//			{
//				DFS(board, row, col, i, col - 1);
//			}
//		}
//		for (int i = 0; i < col; ++i)
//		{
//			if (board[0][i] == 'O')
//			{
//				DFS(board, row, col, 0, i);
//			}
//			if (board[row - 1][i] == 'O')
//			{
//				DFS(board, row, col, row - 1, i);
//			}
//		}
//		for (int i = 0; i < row; ++i)
//		{
//			for (int j = 0; j < col; ++j)
//			{
//				if (board[i][j] == 'O')
//				{
//					board[i][j] = 'X';
//				}
//				if (board[i][j] == '@')
//				{
//					board[i][j] = 'O';
//				}
//			}
//		}
//
//	}
//};
//
///*
//// Employee info
//class Employee {
//public:
//	// It's the unique ID of each node.
//	// unique id of this employee
//	int id;
//	// the importance value of this employee
//	int importance;
//	// the id of direct subordinates
//	vector<int> subordinates;
//};
//*/
//int DFS(unordered_map<int, Employee*> em, int id)
//{
//	int curRet = em[id]->importance;
//	//遍历它的下属
//	for (auto & e : em[id]->subordinates)
//	{
//		curRet += DFS(em, e);
//	}
//	return curRet;
//}
//
//class Solution {
//public:
//	int getImportance(vector<Employee*> employees, int id) {
//		if (employees.empty())
//		{
//			return 0;
//		}
//		unordered_map<int, Employee*> em;
//		for (auto & e : employees)
//		{
//			em[e->id] = e;
//		}
//		return DFS(em, id);
//
//	}
//};
//
//class Solution {
//public:
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
//	int findCircleNum(vector<vector<int>>& M) {
//		//遍历，生成并查集
//		size_t i, j;
//		UnionFindSet ufs(M.size());
//		for (i = 0; i < M.size(); ++i)
//		{
//			for (j = 0; j < M[i].size(); ++j)
//			{
//				if (i < j && M[i][j] == 1)
//				{
//					ufs.Union(i, j);
//				}
//			}
//		}
//		return ufs.Size();
//	}
//};
//
//#include <iostream>
//#include <vector>
//#include<string>
//using namespace std;
//bool deal_tongpei(string tpc, string dpc)
//{
//	int len1 = tpc.size();
//	int len2 = dpc.size();
//	int i = 0;
//	int j = 0;
//	vector<vector<int>> v(len1 + 1, vector<int>(len2 + 1, 0));
//	v[0][0] = 1;
//
//	for (i = 1; i <= len1; ++i)
//	{
//		for (j = 1; j <= len2; ++j)
//		{
//			/* 先处理？ */
//			if (tpc[i - 1] == '?')
//			{
//				if (v[i - 1][j - 1] == 1)
//				{
//					v[i][j] = 1;
//				}
//				else
//				{
//					v[i][j] = 0;
//				}
//			}
//			else if (tpc[i - 1] == '*')
//			{
//
//				if (v[i][j - 1] || v[i - 1][j])
//				{
//					v[i][j] = 1;
//				}
//				else
//				{
//					v[i][j] = 0;
//				}
//			}
//			else
//			{
//				/* 普通字符 */
//				if (tpc[i - 1] == dpc[j - 1] && v[i - 1][j - 1])
//				{
//					v[i][j] = 1;
//				}
//				else
//				{
//					v[i][j] = 0;
//				}
//			}
//		}
//	}
//	if (v[len1][len2])
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//
//}
//int main()
//{
//	string tpc;
//	string dpc;
//	int a = 0;
//	while (cin >> tpc >> dpc)
//	{
//		a = deal_tongpei(tpc, dpc);
//		if (a)
//		{
//			cout << "true" << endl;
//		}
//		else
//		{
//			cout << "false" << endl;
//		}
//		tpc.clear();
//		dpc.clear();
//	}
//
//	system("pause");
//	return 0;
//}
//
//
//class Solution {
//public:
//	bool match(char* str, char* pattern)
//	{
//		//终于找到规律了，这种题填表的时候还是根据题目要求填，填完了填对了才能找规律
//	   //一定要切记，先填表再找规律
//	  //pattern是通配串
//		int row = strlen(str);
//		int col = strlen(pattern);
//		cout << row << " " << col << endl;
//		if (!row && !col)
//		{
//			//两个都为空
//			return true;
//		}
//		if (row == 0)
//		{
//			if (pattern[col - 1] == '*')
//				return true;
//			else
//				return false;
//		}
//		int i = 0;
//		int j = 0;
//		vector<vector<int>> mem(col + 1, vector<int>(row + 1, 0));
//		//全部初始化为0；
//		//填入初始值
//		mem[0][0] = 1;
//
//		for (i = 1; i <= col; ++i)
//		{
//			for (j = 1; j <= row; ++j)
//			{
//				if (pattern[i - 1] == '*')
//				{
//					mem[i][j] = 1;
//				}
//				else if (pattern[i - 1] == '.')
//				{
//
//					if (mem[i - 1][j - 1] == 1)
//					{
//						mem[i][j] = 1;
//					}
//					else
//					{
//						mem[i][j] = 0;
//					}
//				}
//				else
//				{
//					//普通字符
//					if (mem[i - 1][j - 1] && pattern[i - 1] == str[j - 1])
//					{
//						mem[i][j] = 1;
//					}
//					else {
//						mem[i][j] = 0;
//					}
//				}
//			}
//		}
//		return (bool)mem[col][row];
//
//	}
//};
//
//class Solution {
//public:
//	string LeftRotateString(string str, int n) {
//		int size = str.size();
//		string s3;
//		if (size == 0)
//			return s3;
//		int pos = n % size;
//
//		s3 = str.substr(pos) + str.substr(0, pos);
//		return s3;
//	}
//};
//
//
//class Solution {
//public:
//	void FindNumsAppearOnce(vector<int> data, int* num1, int *num2) {
//		int sum = 0;
//		for (auto e : data)
//		{
//			sum ^= e;
//		}
//		int i = 0;
//		for (i = 0; !(sum&(1 << i)); ++i);//检测两个数字是从哪一位开始不同的
//		int tmp1 = 0;
//		int tmp2 = 0;
//		for (auto e : data)
//		{
//			if (e&(1 << i))
//			{
//				tmp1 ^= e;
//			}
//			else
//			{
//				tmp2 ^= e;
//			}
//		}
//		*num1 = tmp1;
//		*num2 = tmp2;
//
//
//	}
//};
//
//
///*
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//			val(x), next(NULL) {
//	}
//};*/
//class Solution {
//public:
//	ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
//		//使用hash结构吧，可能是头不一样后面接入进去了
//		if (pHead1 == NULL || pHead2 == NULL)
//			return NULL;
//		ListNode* cur = pHead1;
//		unordered_map<int, ListNode*> m_map;
//		for (; cur; cur = cur->next)
//		{
//			m_map[cur->val] = cur;
//		}
//		pair<unordered_map<int, ListNode*>::iterator, bool> mem;
//		for (cur = pHead2; cur; cur = cur->next)
//		{
//			mem = m_map.insert(pair<int, ListNode*>(cur->val, cur));
//			if (mem.second == false)
//			{
//				return mem.first->second;
//			}
//		}
//		return NULL;
//	}
//};
//
///*
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//		val(x), next(NULL) {
//	}
//};
//*/
//class Solution {
//public:
//	ListNode* havecycle(ListNode* pHead)
//	{
//		ListNode* fast = pHead;
//		ListNode* slow = pHead;
//
//		while (fast && slow && fast->next)
//		{
//			fast = fast->next->next;
//			slow = slow->next;
//			if (slow == fast)
//			{
//				return slow;
//			}
//		}
//		return NULL;
//	}
//	ListNode* EntryNodeOfLoop(ListNode* pHead)
//	{
//		//右对齐
//		if (pHead == NULL)
//			return NULL;
//		ListNode* tmp = havecycle(pHead);
//		if (tmp == NULL)
//			return NULL;
//		ListNode* cur = pHead;
//		for (; cur; cur = cur->next, tmp = tmp->next)
//		{
//			if (cur == tmp)
//			{
//				return cur;
//			}
//		}
//		return NULL;
//	}
//};
//
//
//class Solution {
//public:
//	int FirstNotRepeatingChar(string str) {
//		if (str.size() == 0)
//			return -1;
//		int arr[57] = { 0 };
//		for (auto &e : str)
//		{
//			arr[e - 'A']++;
//		}
//		vector<int> mem;
//		for (int i = 0; i < 26; ++i)
//		{
//			if (arr[i] == 1)
//			{
//				mem.push_back(i);
//			}
//			if (arr[i + 32] == 1)
//			{
//				mem.push_back(i + 32);
//			}
//		}
//		vector<int> ret;
//		for (int i = 0; i < str.size(); ++i)
//		{
//			for (auto e : mem)
//			{
//				if (str[i] == (e + 'A'))
//				{
//					ret.push_back(i);
//				}
//			}
//		}
//		sort(ret.begin(), ret.end());
//		if (ret.size() > 0)
//		{
//			return ret.front();
//		}
//		else
//		{
//			return -1;
//		}
//	}
//};
//
///*
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//			val(x), left(NULL), right(NULL) {
//	}
//};*/
//class Solution {
//public:
//	vector<vector<int>> ret;
//	vector<int> path;
//	void findpath(TreeNode* root, int expectNumber, vector<int> path, int cursum)
//	{
//		cursum += root->val;
//		path.push_back(root->val);
//		bool leaf = (root->left == NULL && root->right == NULL);
//		if ((cursum == expectNumber) && leaf)
//			ret.push_back(path);
//		if (root->left)
//			findpath(root->left, expectNumber, path, cursum);
//		if (root->right)
//			findpath(root->right, expectNumber, path, cursum);
//		//退栈的时候，清除当前节点
//		cursum -= root->val;
//		path.pop_back();
//	}
//	vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
//		if (!root)
//		{
//			return ret;
//		}
//		int cursum = 0;
//		findpath(root, expectNumber, path, cursum);
//		return ret;
//	}
//};
//
//class Solution {
//public:
//	RandomListNode* Clone(RandomListNode* pHead)
//	{
//		unordered_map<RandomListNode*, RandomListNode*> map;//旧的，新的
//		RandomListNode * cur = pHead;
//		if (!cur)
//			return NULL;
//		RandomListNode * first = NULL;
//		RandomListNode * end = NULL;
//		for (; cur; cur = cur->next)
//		{
//			RandomListNode* tmp = new RandomListNode(cur->label);
//			map[cur] = tmp;
//			if (!first)
//			{
//				first = tmp;
//				end = tmp;
//			}
//			else
//			{
//				end->next = tmp;
//				end = tmp;
//			}
//		}
//		//构造完普通链表，构造复杂链表
//		unordered_map<RandomListNode*, RandomListNode*>::iterator it;
//		for (auto &e : map)
//		{
//			RandomListNode * old = e.first->random;
//			it = map.find(old);
//			if (it != map.end())
//			{
//				e.second->random = (*it).second;
//			}
//
//		}
//		return first;
//
//	}
//};
//
//class Solution {
//public:
//	vector<string> Permutation(string str) {
//		vector<int> arr;
//		vector<string> ret;
//		int length = str.size();
//		if (length == 0)
//		{
//			return ret;
//		}
//		for (auto & e : str)
//		{
//			arr.push_back(e - '0');
//		}
//		sort(arr.begin(), arr.end());
//		string tmp;
//		do {
//			for (auto e : arr)
//			{
//				tmp += (e + '0');
//			}
//			ret.push_back(tmp);
//			tmp.clear();
//		} while (next_permutation(arr.begin(), arr.end()));
//		return ret;
//	}
//};
///*
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//			val(x), left(NULL), right(NULL) {
//	}
//};*/
//class Solution {
//public:
//	bool DoseTree1HaveTree2(TreeNode* pRoot1, TreeNode* pRoot2)
//	{
//		if (pRoot2 == NULL)
//			return true;//能走到根节点说明前面的完全相同
//		if (pRoot1 == NULL)//root2存在，root1不存在直接false
//			return false;
//		if (pRoot1->val != pRoot2->val)
//			return false;
//
//		return DoseTree1HaveTree2(pRoot1->left, pRoot2->left)
//			&& DoseTree1HaveTree2(pRoot1->right, pRoot2->right);
//		//如果在调用点处没有操作的话，它会将return的结果一直保留到调用点处，直到退完栈，一直存在在
//		//调用点处这时候可以选择return 整个函数执行的结果，或者退栈的结果做一些操作
//		//递归体本来就是满足条件的，不满足就会return；返回到最原始调用点
//		//可以将递归当成循环，满足条件的，就一直递归呗，不满足的就return，不循环了，递归体就是重复的动作
//	}
//	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
//	{
//		bool result = false;
//		if (pRoot1 != NULL && pRoot2 != NULL)
//		{
//			if (pRoot1->val == pRoot2->val)
//			{
//				result = DoseTree1HaveTree2(pRoot1, pRoot2);
//			}
//			if (!result)
//			{
//				result = HasSubtree(pRoot1->left, pRoot2);
//
//			}
//			if (!result)
//			{
//				result = HasSubtree(pRoot1->right, pRoot2);
//			}
//		}
//		return result;
//	}
//};
//
//class Solution {
//public:
//	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
//	{
//		vector<int> ret;
//		ListNode * cur = pHead1;
//		for (; cur; cur = cur->next)
//		{
//			ret.push_back(cur->val);
//		}
//		for (cur = pHead2; cur; cur = cur->next)
//		{
//			ret.push_back(cur->val);
//		}
//		if (ret.size() == 0)
//		{
//			return NULL;
//		}
//		sort(ret.begin(), ret.end());
//		reverse(ret.begin(), ret.end());
//		ListNode * pHead = new ListNode(ret[0]);
//		ret.erase(ret.begin());
//		for (auto e : ret)
//		{
//			ListNode * cur = new ListNode(e);
//			cur->next = pHead;
//			pHead = cur;
//		}
//		return pHead;
//
//	}
//};
//
//class Solution {
//public:
//	void reOrderArray(vector<int> &array) {
//		//使用双指针
//		int size = array.size();
//		if (size == 0)
//			return;
//		/*int left=0;
//		int right=size-1;
//		while(left<right)
//		{
//			while(array[left]%2!=0)
//			{
//				left++;
//			}
//			while(array[right]%2==0)
//			{
//				right--;
//			}
//			int tmp=array[left];
//			array[left]=array[right];
//			array[right]=tmp;
//			left++;
//			right--;
//			*/
//		vector<int> ji;
//		vector<int> ou;
//		for (auto e : array)
//		{
//			if (e % 2 == 0)
//			{
//				ou.push_back(e);
//			}
//			else
//			{
//				ji.push_back(e);
//			}
//		}
//		int i = 0;
//		for (i = 0; i < ji.size(); ++i)
//		{
//			array[i] = ji[i];
//		}
//		for (int j = 0; i < size; ++i, j++)
//		{
//			array[i] = ou[j];
//		}
//
//	}
//};
//
//class Solution {
//public:
//	int minNumberInRotateArray(vector<int> rotateArray) {
//		int length = rotateArray.size();
//		if (length == 0)
//			return 0;
//		int left = 0;
//		int right = length - 1;
//		while (left < right)
//		{
//			int mid = (left + right) / 2;
//			if (left == mid)
//			{
//				return rotateArray[left + 1];
//			}
//			if ((rotateArray[left] >= rotateArray[mid]) && (rotateArray[right] >= rotateArray[mid]))
//			{
//				right = mid;
//				continue;
//			}
//			if ((rotateArray[left] <= rotateArray[mid]) && (rotateArray[right] <= rotateArray[mid]))
//			{
//				left = mid;
//				continue;
//			}
//
//
//		}
//		return 0;
//	}
//};
//
//class Solution {
//public:
//	int rectCover(int number) {
//		int step1 = 1;
//		int step2 = 2;
//		if (number == 0)
//			return 0;
//		if (number == 1)
//			return step1;
//		if (number == 2)
//			return step2;
//		int ret;
//		for (int i = 3; i <= number; ++i)
//		{
//			ret = step1 + step2;
//			step1 = step2;
//			step2 = ret;
//		}
//		return ret;
//
//	}
//};
//class Solution {
//public:
//	void replaceSpace(char *str, int length) {
//		string ret;
//		for (int i = 0; i < length; ++i)
//		{
//			if (str[i] == ' ')
//			{
//				ret += "%20";
//			}
//			else
//			{
//				ret += str[i];
//			}
//		}
//		for (int i = 0; i < ret.size(); ++i)
//		{
//			str[i] = ret[i];
//		}
//
//		//str=ret.c_str();
//	}
//};
//
//#include "iostream"
//#include "vector"
//using namespace std;
//
//struct ListNode
//{
//	int val;
//	ListNode* next;
//	ListNode(int x) :val(x), next(nullptr) {}
//};
//
//ListNode* creatList(vector<int> myVec)
//{
//	ListNode* pHead = new ListNode(myVec[0]);
//	ListNode* prev = pHead;
//	for (int i = 1; i < myVec.size() - 1; i++)
//	{
//		pHead->next = new ListNode(myVec[i]);
//		pHead = pHead->next;
//	}
//	return prev;
//}
//
//ListNode* reverseList(ListNode* pHead, int k)
//{
//	ListNode* right = pHead;
//	ListNode* left = pHead;
//	ListNode* prev = pHead;
//	for (int i = 0; i < k; i++)
//	{
//		if (right != nullptr)
//			right = right->next;
//		else
//			return left;
//	}
//	ListNode* head = left;
//	while (left != right)
//	{
//		ListNode* pNext = left->next;
//		left->next = prev;
//		prev = left;
//		left = pNext;
//	}
//	head->next = reverseList(right, k);
//	return prev;
//
//}
//
//int main()
//{
//	vector<int> myVec;
//	int temp = 0;
//	while (cin >> temp)
//		myVec.push_back(temp);
//	int k = myVec[myVec.size() - 1];
//	ListNode* pHead = creatList(myVec);
//	pHead = reverseList(pHead, k);
//	while (pHead != nullptr)
//	{
//		cout << pHead->val << " ";
//		pHead = pHead->next;
//	}
//
//	return 0;
//}
//
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
///* 它每次只对一行文本做删除一个字符、插入一个字符或替换一个字符三种操作 */
///* 深入理解题意，填表-》定义初始状态，公式 */
//int deal_shortest(string str1, string str2)
//{
//	int len1 = str1.size();
//	int len2 = str2.size();
//	int i = 0;
//	int j = 0;
//	vector<vector<int>> m_v(len1 + 1, vector<int>(len2 + 1, 0));//生成二维数组用于填表
//	/* 设定初始值 ,vector一旦设定存储空间那么它就成了C语言中的数组，存在边界*/
//	m_v[0][0] = 0;
//	for (i = 1; i <= len1; ++i)
//	{
//		m_v[i][0] = i;
//	}
//	for (i = 1; i <= len2; ++i)
//	{
//		m_v[0][i] = i;
//	}
//	for (i = 1; i <= len1; ++i)
//	{
//		for (j = 1; j <= len2; ++j)
//		{
//			if (str1[i - 1] == str2[j - 1])
//			{
//				m_v[i][j] = m_v[i - 1][j - 1];
//			}
//			else
//			{
//				m_v[i][j] = min(m_v[i][j - 1], min(m_v[i - 1][j - 1], m_v[i - 1][j])) + 1;
//			}
//		}
//	}
//	return m_v[len1][len2];
//}
//int main()
//{
//	string str1;
//	string str2;
//	while (cin >> str1 >> str2)
//	{
//		cout << deal_shortest(str1, str2) << endl;
//		str1.clear();
//		str2.clear();
//	}
//	system("pause");
//	return 0;
//}
//
//
//class AscentSequence {
//public:
//	int findLongest(vector<int> A, int n) {
//		// write code here
//
//		vector<int> dp(A.size(), 1);
//		for (int i = 0; i < A.size(); ++i)
//		{
//			for (int j = 0; j < i; ++j)
//			{
//				if (A[j] < A[i])
//				{
//					dp[i] = max(dp[j] + 1, dp[i]);
//				}
//			}
//		}
//		int ret = INT_MIN;
//		for (auto e : dp)
//		{
//			ret = max(ret, e);
//		}
//		return ret;
//	}
//};
//
//#include<vector>
//#include<iostream>
//using namespace std;
//int findshort(vector<vector<int>> & v, int row, int col)
//{
//	//使用一个辅助矩阵；
//	vector<vector<int>> memo(row, vector<int>(col, 0));
//	memo[0][0] = v[0][0];
//	//一行的
//	for (int i = 1; i < col; ++i)
//	{
//		memo[0][i] = memo[0][i - 1] + v[0][i];
//	}
//	for (int i = 1; i < row; ++i)
//	{
//		memo[i][0] = memo[i - 1][0] + v[i][0];
//	}
//	for (int i = 1; i < row; ++i)
//	{
//		for (int j = 1; j < col; ++j)
//		{
//			memo[i][j] = min(memo[i - 1][j], memo[i][j - 1]) + v[i][j];
//		}
//	}
//	return memo[row - 1][col - 1];
//}
//int main()
//{
//	int a1;
//	int a2;
//	while (cin >> a1 >> a2)
//	{
//		vector<vector<int>> m_v(a1);
//
//		int tmp;
//		for (int i = 0; i < a1; ++i)
//		{
//			for (int j = 0; j < a2; ++j)
//			{
//				cin >> tmp;
//				m_v[i].push_back(tmp);
//			}
//		}
//		if (m_v.size() == 0)
//		{
//			return 0;
//		}
//		int ret = findshort(m_v, a1, a2);
//		cout << ret << endl;
//	}
//	return 0;
//}
//# include <bits/stdc++.h>
//using namespace std;
//
//struct list_node {
//	int val;
//	struct list_node * next;
//};
//
//
//list_node * input_list(void)
//{
//	int n, val;
//	list_node * phead = new list_node();
//	list_node * cur_pnode = phead;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; ++i) {
//		scanf("%d", &val);
//		if (i == 1) {
//			cur_pnode->val = val;
//			cur_pnode->next = NULL;
//		}
//		else {
//			list_node * new_pnode = new list_node();
//			new_pnode->val = val;
//			new_pnode->next = NULL;
//			cur_pnode->next = new_pnode;
//			cur_pnode = new_pnode;
//		}
//	}
//	return phead;
//}
//
//
//list_node * selection_sort(list_node * head)
//{
//	//////在下面完成代码
//	list_node * i;
//	list_node * j;
//	int  min_val, tmp;
//	list_node * index;
//	for (i = head; i; i = i->next)
//	{
//		min_val = i->val;
//		index = i;
//		for (j = i->next; j; j = j->next)
//		{
//			if (min_val > j->val)
//			{
//				min_val = j->val;
//				index = j;
//			}
//		}
//		//交换
//		tmp = i->val;
//		i->val = index->val;
//		index->val = tmp;
//
//	}
//	return head;
//
//}
//
//
//void print_list(list_node * head)
//{
//	while (head != NULL) {
//		printf("%d ", head->val);
//		head = head->next;
//	}
//	puts("");
//}
//
//
//int main()
//{
//	list_node * head = input_list();
//	list_node * new_head = selection_sort(head);
//	print_list(new_head);
//	return 0;
//}
//
//class Solution {
//public:
//	int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
//		int m = obstacleGrid.size();
//
//		int n = obstacleGrid[0].size();
//		//==  和 || 谁的优先级更高？
//
//		if (m&&n)
//		{
//			;
//		}
//		else
//		{
//			return 0;
//		}
//		vector<vector<int>> v(m, vector<int>(n, 0));
//
//		for (int i = 0; i < n; ++i)
//		{
//			//行
//			if (obstacleGrid[0][i] != 1)
//			{
//				v[0][i] = 1;
//			}
//			else
//			{
//				for (int j = i + 1; j < n; ++j)
//				{
//					v[0][j] = 0;//
//				}
//				break;
//			}
//
//
//		}
//		for (int i = 0; i < m; ++i)
//		{
//			//列，是行在变化
//			if (obstacleGrid[i][0] != 1)
//			{
//				v[i][0] = 1;
//			}
//			else
//			{
//				for (int j = i + 1; j < m; ++j)
//				{
//					v[j][0] = 0;
//				}
//				break;
//			}
//		}
//		for (int i = 1; i < m; ++i)
//		{
//			for (int j = 1; j < n; ++j)
//			{
//				if (obstacleGrid[i][j] != 1)
//				{
//					v[i][j] = v[i - 1][j] + v[i][j - 1];
//				}
//				else
//				{
//					v[i][j] = 0;
//				}
//			}
//		}
//		return v[m - 1][n - 1];
//	}
//};
//
//class ArrayMex {
//public:
//	int findArrayMex(vector<int> A, int n) {
//		// write code here
//		sort(A.begin(), A.end());
//		if (A[0] > 1)
//			return 1;
//		for (int i = 0; i < n; ++i)
//		{
//			if (A[i + 1] - A[i] > 1)
//				return A[i] + 1;
//		}
//		return A[n - 1] + 1;
//	}
//};
//
//class Solution {
//public:
//	int uniquePaths(int m, int n) {
//		vector<vector<int>> v(m + 1, vector<int>(n + 1, 0));
//		v[0][1] = 1;
//		for (int i = 1; i <= m; ++i)
//		{
//			for (int j = 1; j <= n; ++j)
//			{
//				v[i][j] = v[i - 1][j] + v[i][j - 1];
//
//			}
//		}
//
//		return v[m][n];
//
//	}
//};
