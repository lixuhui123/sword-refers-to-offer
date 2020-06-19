//#include <iostream>
//#include <vector>
//using namespace std;
////还是多看多想吧
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//vector<vector<int>> ret;
//void FindPath(TreeNode* root, int expSum, vector<int> &path, int curSum)
//{
//	curSum += root->val;
//	path.push_back(root->val);
//	bool isleaf = root->left == NULL && root->right == NULL;
//	if (curSum == expSum && isleaf)
//	{
//		ret.push_back(path);
//	}
//	if (root->left != NULL)
//	{
//		FindPath(root->left, expSum, path, curSum);
//	}
//	if (root->right != NULL)
//	{
//		FindPath(root->right, expSum, path, curSum);
//
//	}
//	curSum -= root->val;
//	path.pop_back();
//
//}
//void findPath(TreeNode* root, int expSum)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	vector<int> path;
//	int cursum = 0;
//	FindPath(root, expSum, path, cursum);
//}
//
//
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
//
//	findPath(&root, 22);
//	system("pause");
//	return 0;
//}