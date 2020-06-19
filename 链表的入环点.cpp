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
//		//ÓÒ¶ÔÆë
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