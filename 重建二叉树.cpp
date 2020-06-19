///**
// * Definition for binary tree
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// * };
// */
//class Solution {
//public:
//	TreeNode* reConstructBinaryTree(vector<int> &pre, vector<int> &vin) {
//
//		if (vin.size() == 0)
//			return NULL;
//		vector<int> pre_left, pre_right, vin_left, vin_right;
//		TreeNode * head = new TreeNode(pre[0]);
//		int gen = 0;
//		for (int i = 0; i < vin.size(); ++i)
//		{//在中序里面找根
//			if (pre[0] == vin[i])
//			{
//				gen = i;
//				break;
//			}
//		}
//
//		for (int i = 0; i < gen; ++i)
//		{
//			vin_left.push_back(vin[i]);
//			pre_left.push_back(pre[i + 1]);
//		}
//		for (int i = gen + 1; i < vin.size(); ++i)
//		{
//			vin_right.push_back(vin[i]);
//			pre_right.push_back(pre[i]);
//		}
//
//		head->left = reConstructBinaryTree(pre_left, vin_left);
//		head->right = reConstructBinaryTree(pre_right, vin_right);
//		return head;
//	}
//};