//#include <iostream>
//#include <unordered_map>
//#include <vector>
//using namespace std;
//
//
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//		val(x), next(NULL) {
//	}
//};
//class Solution {
//public:
//	ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
//		//使用hash结构吧，可能是头不一样后面接入进去了
//		if (!pHead1 && !pHead2)
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
//int main()
//{
//	ListNode root1(1);
//	ListNode t1(2);
//	ListNode t2(3);
//	ListNode t3(4);
//	ListNode root2(7);
//	ListNode t8(8);
//	root1.next = &t1;
//	t1.next = &t2;
//	t2.next = &t3;
//	root2.next = &t8;
//	root2.next->next = root1.next->next;
//	Solution test;
//	 test.FindFirstCommonNode(&root1, &root2);
//	system("pause"); 
//	return 0;
//}