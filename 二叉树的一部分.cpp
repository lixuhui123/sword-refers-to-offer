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