//#include <iostream>
//#include <set>
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
//
//class Solution {
//public:
//	ListNode* deleteDuplication(ListNode* pHead)
//	{
//		ListNode* cur = pHead;
//		vector<int> v;
//		if (cur)
//			return NULL;
//		for (; cur; cur = cur->next)
//		{
//			v.push_back(cur->val);
//		}
//		vector<int>::iterator it;
//		for (it = v.begin(); it < v.end() - 1;)
//		{
//			int tmp = *it;
//			auto j = it;
//			int num = 1;
//			while ((it + 1 != v.end()) && tmp == *(it + 1))
//			{
//				num++;
//				it++;
//			}
//			if (num == 1)
//			{
//				it++;
//			}
//			else
//			{
//				it = v.erase(j, j + num);
//			}
//		}
//		reverse(v.begin(), v.end());
//		ListNode * head = NULL;
//		//s.erase(s.begin());
//		for (auto & e : v)
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
//	ListNode t4(4);
//	ListNode t5(5);
//	t1.next = &t2;
//	t2.next = &t3;
//	t3.next = &t4;
//	t4.next = &t5;
//	Solution test;
//	test.deleteDuplication(&t1);
//	system("pause"); 
//	return 0;
//}