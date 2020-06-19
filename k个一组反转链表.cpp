//#if 0
//#include <iostream>
//#include <string>
//#include<sstream>
//using namespace std;
//
//typedef struct ListNode
//{
//	int m_v;
//	ListNode * next;
//}ListNode;
//
//typedef struct List
//{
//	ListNode * head;
//}List;
//
//void construct(List* phead)
//{
//	phead->head = NULL;
//}
//void push_head(List* Plist, int val)
//{
//	//头插
//	ListNode* cur = (ListNode*)malloc(sizeof(ListNode));
//	cur->m_v = val;
//	cur->next = Plist->head;
//	Plist->head = cur;
//}
//void destroy(List * plist)
//{
//	ListNode * tmp;
//
//	while (plist->head)
//	{
//		tmp = plist->head;
//		plist->head = tmp->next;
//		free(tmp);
//
//
//	}
//}
//
//void print(ListNode * Plist)
//{
//	ListNode * cur;
//	for (cur = Plist ; cur; cur = cur->next)
//	{
//		printf("%d ", cur->m_v);
//	}
//	//cout << endl;
//}
//
//void reserve(List * phead)
//{
//	ListNode * cur = phead->head;
//	ListNode * tmp = phead->head->next;
//
//	while (tmp)
//	{
//		cur->next = tmp->next;
//		tmp->next = phead->head;
//		phead->head = tmp;
//		tmp = cur->next;
//	}
//
//}
//
//ListNode * reverse(ListNode* a, ListNode* b)
//{
//	if (!a)
//		return NULL;
//	ListNode* pre = NULL;
//	ListNode* next = a;
//	ListNode* cur = a;
//	while (cur != b)
//	{
//		next = cur->next;
//		cur->next = pre;
//		pre = cur;
//		cur = next;
//	}
//	return pre;
//}
//ListNode * _reverse(ListNode* head, int k)
//{
//	if (!head)
//		return NULL;
//	ListNode * a;
//	ListNode * b;
//	a = b = head;
//	for (int i = 0; i < k; ++i)
//	{
//		//不足k个不需要反转，base case
//		if (b == NULL)
//		{
//			return head;
//		}
//		b = b->next;
//	}
//	ListNode * newHead = reverse(a, b);
//	a->next = _reverse(b, k);
//	return newHead;
//}
//
//int main()
//{
//
//	string str;
//
//	while (getline(cin, str))
//	{
//		int sec, tmp;
//		List test;
//		construct(&test);
//		cin >> sec;
//		istringstream iss(str);
//		while (iss >> tmp)
//		{
//			push_head(&test, tmp);
//		}
//		reserve(&test);
//
//		ListNode * k=_reverse(test.head, sec);
//
//		print(k);
//
//		//destroy(&test);
//
//	}
//
//
//
//
//
//	system("pause");
//	return 0;
//}
//
//
//#else 
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//typedef struct list
//{
//	int val;
//	list* next;
//
//	list(int tmp) :val(tmp)
//	{
//		next = NULL;
//	}
//}list;
////三个指针反转链表
//list * threepost(list * head)
//{
//	if (!head)
//		return NULL;
//	list * pre;
//	list *cur;
//	list *next;
//	pre = NULL; cur = head; next = head;
//	while (cur!=NULL)
//	{
//		next = cur->next;
//		cur->next = pre;
//		pre = cur;
//		cur = next;
//	}
//	return pre;
//
//}
////反转一个区间,左开右闭区间
//list * reverse(list* a, list* b)
//{
//	if (!a)
//		return NULL;
//	list* pre = NULL;
//	list* next = a;
//	list* cur = a;
//	while (cur != b)
//	{
//		next = cur->next;
//		cur->next = pre;
//		pre = cur;
//		cur = next;
//	}
//	return pre;
//}
//list * _reverse(list* head, int k)
//{
//	if (!head)
//		return NULL;
//	list * a;
//	list * b;
//	a = b = head;
//	for (int i = 0; i < k; ++i)
//	{
//		//不足k个不需要反转，base case
//		if (b == NULL)
//		{
//			return head;
//		}
//		b = b->next;
//	}
//	list * newHead = reverse(a, b);
//	a->next = _reverse(b, k);
//	return newHead;
//}
//
//void ordpro(list * head)
//{
//	if (head == NULL)
//		return  ;
//	ordpro(head->next);
//	cout << head->val << " ";
//}
//int main()
//{
//	 
//	list l1(1);
//	list l2(1);
//	list l3(1);
//	list l4(2);
//	list l5(2);
//	list l6(7);
//	l1.next = &l2;
//	l2.next = &l3;
//	l3.next = &l4;
//	l4.next = &l5;
//	l5.next = &l6;
//	ordpro(&l1);
//
//	list * tmp=NULL;
//	//tmp=threepost(&l1);
//	//tmp=_reverse(&l1, 2);
//	//如何寻找0~n序列中的缺失的一个数，
//	/* 遍历，数组下标和元素值异或 */
//	/* 判断链表是否回文，利用栈，就是后序遍历，因为回文前序和后序都一样 */
//	system("pause"); 
//	return 0;
//}
//#endif