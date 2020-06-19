//#include <iostream>
//#include <vector>
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
//int remove(vector<int> & v)
//{
//	int n = v.size();
//	if (n == 1)
//		return 1;
//	if (n == 0)
//		return 0;
//	int slow = 0;
//	int fast = 1;
//	while (fast < n)
//	{
//		if (v[slow] != v[fast])
//		{
//			slow++;
//			v[slow] = v[fast];
//			fast++;
//		}
//		else
//		{
//			fast++;
//
//		}
//	}
//	return slow+1;
//}
//
////删除链表的重复节点
//list * _remove(list * head)
//{
//	if (!head)
//		return NULL;
//	list* slow = head;
//	list* fast = head->next;
//	while (fast!=NULL)
//	{
//		if (fast->val != slow->val)
//		{
//			slow = slow->next;
//			slow->val = fast->val;
//		}
//		fast = fast->next;
//	}
//	slow->next = NULL;
//	return head;
//}
//
//int main()
//{
//	vector<int> v{ 1,1,1,2,2,3,3,4 };
//	// cout << remove(v);
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
//	_remove(&l1);
//	system("pause"); 
//	return 0;
//}