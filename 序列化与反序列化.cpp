//#include <iostream>
//#include <string>
//using namespace std;
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//
//class Solution {
//public:
//	void serializeHelper(TreeNode *node, string& s)
//	{
//		if (node == NULL)
//		{
//			s.push_back('N');
//			s.push_back(',');
//			return;
//		}
//		s += to_string(node->val);
//		s.push_back(',');
//		serializeHelper(node->left, s);
//		serializeHelper(node->right, s);
//	}
//	char* Serialize(TreeNode *root)
//	{
//		if (root == NULL)
//			return NULL;
//		string s = "";
//		serializeHelper(root, s);
//
//		char *ret = new char[s.length() + 100];
//		strcpy_s(ret,strlen(ret),  s.c_str());
//		return ret;
//	}
//
//	TreeNode *deserializeHelper(string &s)
//	{
//		if (s.empty())
//			return NULL;
//		if (s[0] == 'N')
//		{
//			s = s.substr(2);
//			return NULL;
//		}
//		TreeNode *ret = new TreeNode(stoi(s));
//		s = s.substr(s.find_first_of(',') + 1);
//		ret->left = deserializeHelper(s);
//		ret->right = deserializeHelper(s);
//		return ret;
//	}
//
//	TreeNode* Deserialize(char *str)
//	{
//		if (str == NULL)
//			return NULL;
//		string s(str);
//		return deserializeHelper(s);
//	}
//};
//
//int main()
//{
//	TreeNode t1(1);
//	TreeNode t2(2);
//	TreeNode t3(3);
//	t1.left = &t2;
//	t1.right = &t3;
//	Solution test;
// 
//	char *s = NULL;
//	s = test.Serialize(&t1);
//	test.Deserialize(s);
//	//cout << round(1.5) << endl;
//
//	system("pause"); 
//	return 0;
//}