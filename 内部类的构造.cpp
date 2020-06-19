//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	A()
//	{
//		cout << "A" << endl;
//	}
//	class C;
//	
//	int d = 0;
//};
//
//class A::C
//{
//	C()
//	{
//		cout << "C" << endl;
//	}
//};
//class B :public A
//{
//public:
//	B()
//	{
//		cout << "B" << endl;
//	}
//};
//
//template<typename Key>
//class SkipList {
//private:
//	struct SkipNode;
//public:
//	SkipList()
//	{}
//
//	Key PrintHead()
//	{
//		return PutKey(head_);
//	}
//
//	Key PutKey(SkipNode node);
//private:
//	SkipNode head_;
//};
//template<typename Key>
//class SkipList<Key>::SkipNode {
//public:
//	Key key_;
//	SkipNode()
//		:key_(Key())
//	{}
//};
//template<typename Key>
//Key SkipList<Key>::PutKey(typename SkipList<Key>::SkipNode node) {
//	cout << node.key_ << endl;
//}
//
//
//
//int main()
//{
//	
//	system("pause");
//	return 0;
//}