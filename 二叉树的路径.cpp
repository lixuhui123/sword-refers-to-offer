//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//class Solution {
//public:
//	vector<vector<int> > ret;
//	vector<int> lev;
// 
//	int add()
//	{
//		int add = 0;
//		for (auto e : lev)
//		{
//			add += e;
//		}
//		return add;
//	}
//	int flag = false;
//	void perord(TreeNode* root, int expectNumber)
//	{
//		
//		if (!root->left && !root->right)
//		{
//			lev.push_back(root->val);
//		 
//			flag = true;
//			return;
//		}
//		else
//		{
//			 
//			lev.push_back(root->val);
//		}
//		if (root->left)
//		{
//			perord(root->left, expectNumber);
//			if (flag)
//			{
//				//走到叶子节点
//				if (add() == expectNumber)
//				{
//					ret.push_back(lev);
//					lev.pop_back();
//					flag = false;
//				}
//			}
//			
//		}
//		if (root->right)
//		{
//			perord(root->right, expectNumber);
//			if (flag)
//			{
//				//走到叶子节点
//				if (add() == expectNumber)
//				{
//					ret.push_back(lev);
//					//lev.pop_back();
//					flag = false;
//				}
//			}
//		}
//		lev.pop_back();
//	}
//	vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
//
//		if (!root)
//			return ret;
//		perord(root, expectNumber);
//		return ret;
//	}
//};
//vector<int> tmp;
//void pre(TreeNode* root)
//{
//	if (!root)
//	{
//		return;
//	}
//	cout << root->val << " ";
//	tmp.push_back(root->val);
//	pre(root->left);
//	pre(root->right);
//	
//	tmp.pop_back();
//	//这样子就能做到返回父节点时删除叶子节点，递归要细化过程，不能一股脑判断，函数的执行
//	//过程要研究
//}
//int main()
//{
//	TreeNode root(10);
//	TreeNode root1(5);
//	TreeNode root2(12);
//	TreeNode root3(4);
//	TreeNode root4(7);
//
//
//	root.left = &root1;
//	root.right = &root2;
//	root.left->left = &root3;
//	root.left->right = &root4;
//	//Solution test;
//	//vector<vector<int>> ok;
// 	//ok=test.FindPath(&root, 6);
//	pre(&root);
//	system("pause");
//	return 0;
//}