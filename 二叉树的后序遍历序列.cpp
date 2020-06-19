#include <iostream>
using namespace std;
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL) {
	}
};
//�õ�һ��������Ҫ�������⣬����һ������г�ͼʾ���ж���ʲô�����ܣ�����ݹ���ǣ�ѭ����ݹ�����
bool DoseTree1HaveTree2(TreeNode* pRoot1, TreeNode* pRoot2) 
{
	if (pRoot2 == NULL)
		return true;//���ߵ����ڵ�˵��ǰ�����ȫ��ͬ
	if (pRoot1 == NULL)//root2���ڣ�root1������ֱ��false
		return false;
	if (pRoot1->val != pRoot2->val)
		return false;

	return DoseTree1HaveTree2(pRoot1->left, pRoot2->left) 
		&& DoseTree1HaveTree2(pRoot1->right, pRoot2->right);
	//����ڵ��õ㴦û�в����Ļ������Ὣreturn�Ľ��һֱ���������õ㴦��ֱ������ջ��һֱ������
	//���õ㴦��ʱ�����ѡ��return ��������ִ�еĽ����������ջ�Ľ����һЩ����
	//�ݹ��屾���������������ģ�������ͻ�return�����ص���ԭʼ���õ�
	//���Խ��ݹ鵱��ѭ�������������ģ���һֱ�ݹ��£�������ľ�return����ѭ���ˣ��ݹ�������ظ��Ķ���
}
bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
{
	bool result = false;
	if (pRoot1 != NULL && pRoot2 != NULL)
	{
		if (pRoot1->val ==pRoot2->val)
		{
			result = DoseTree1HaveTree2(pRoot1, pRoot2);
		}
		if (!result)
		{
			result = HasSubtree(pRoot1->left, pRoot2);

		}
		if (!result)
		{
			result = HasSubtree(pRoot1->right, pRoot2);
		}
	}
	return result;
}
int main()
{
	TreeNode root(1);
	TreeNode left(2);
	TreeNode right(3);
	root.left = &left;
	root.right = &right;

	TreeNode root1(1);
	TreeNode left1(2);
	TreeNode right1(3);
	root1.left = &left1;
	root1.right = &right1;
	//root1.right->left = &left1;
	cout<<HasSubtree(&root, &root1);
	system("pause"); 
	return 0;
}