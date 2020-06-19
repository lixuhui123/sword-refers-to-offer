//#include <iostream>
//#include<set>
//using namespace std;
//
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//		val(x), next(NULL) {
//	}
//};
//
//class Solution {
//public:
//	ListNode* deleteDuplication(ListNode* pHead)
//	{
//		ListNode* cur = pHead;
//		set<int> s;
//		if (cur)
//			return NULL;
//		for (; cur; cur = cur->next)
//		{
//			s.insert(cur->val);
//		}
//		reverse(s.begin(), s.end());
//		ListNode * head = NULL;
//		//s.erase(s.begin());
//		for (auto & e : s)
//		{
//			cur = new ListNode(e);
//			if (head == NULL)
//			{
//				head = cur;
//			}
//			else
//			{
//				cur->next = head;
//				head = cur;
//			}
//
//		}
//		return head;
//	}
//};
//
//int main()
//{
//	ListNode t1(1);
//	ListNode t2(2);
//	ListNode t3(3);
//	t1.next = &t2;
//	t2.next = &t3;
//	Solution test;
//	test.deleteDuplication(&t1);
//
//	system("pause");
//	return 0;
//}