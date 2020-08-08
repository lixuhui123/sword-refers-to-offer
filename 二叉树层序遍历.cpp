////#include <iostream>
////#include <string>
////#include <queue>
////#include <vector>
////#include <algorithm>
////using namespace std;
////typedef struct TreeNode
////{
////	int a;
////	TreeNode * left;
////	TreeNode * right;
////};
////void func(TreeNode * head)
////{
////	if (!head)
////		return;
////	queue<TreeNode *> qu;
////	TreeNode * cur = head;
////	qu.push(cur);
////	int leve = 1;
////	while (!qu.empty())
////	{
////		for (int i = 0; i < leve; ++i)
////		{
////			cout<<(cur = qu.front());
////			qu.pop();
////			if (cur->left)
////			{
////				qu.push(cur->left);
////			}
////			if (cur->right)
////			{
////				qu.push(cur->right);
////			}
////		}
////		leve = qu.size();
////	}
////}
////int main()
////{
////	
////	system("pause"); 
////	return 0;
////}
//
//#include "iostream"
//#include <string>
//#include <vector>
//using namespace std;
//typedef struct ListNode
//{
//	int val;
//	ListNode * next;
//public:
//	ListNode(int tmp):val(tmp),next(nullptr)
//	{}
//};
// 
//int main()
//{
//	int num;
//	cin >> num;
//	vector<int> ret;
//	while (num)
//	{
//		--num;
//		int tmp = 0;
//		cin >> tmp;
//		ret.push_back(tmp);
//	}
// 
//	//reverse(ret.begin(), ret.end());
//	/*for (auto &e : ret)
//	{
//		cout << e << " ";
//	}*/
//	cout << endl;
//	ListNode * pHead = new ListNode(0);
//	for (int i = 0; i < ret.size(); ++i)
//	{
//		if (i == 0)
//		{
//			pHead->val = ret[i];
//			pHead->next = nullptr;
//		}
//		else
//		{
//			ListNode * cur = new ListNode(ret[i]);
//			cur->next = pHead;
//			pHead = cur;
//		}
//	}
//	ListNode * cur = pHead;
//	ListNode * tmp = pHead->next;
//	while (tmp)
//	{
//		cur->next = tmp->next;
//		tmp->next = pHead;
//		pHead = tmp;
//		tmp = cur->next;
//	}
//	cur = pHead;
//	for (; cur; cur = cur->next)
//	{
//		cout << cur->val << " ";
//	}
//	system("pause");
//	return 0;
//
//}
//
//
//
//
//
//
//
//
