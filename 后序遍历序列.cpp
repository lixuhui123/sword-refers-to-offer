//class Solution {
//public:
//	bool judgeord(vector<int> judge)
//	{
//		int lengthsize = judge.size();
//		if (judge.empty())
//			return true;
//		int root = judge.back();
//		vector<int> left;
//		vector<int> right;
//		int i = 0;
//		for (i = 0; i < lengthsize; ++i)
//		{
//			if (judge[i] < root)
//			{
//				left.push_back(judge[i]);
//			}
//			else {
//				break;
//			}
//		}
//		for (i++; i < lengthsize; ++i)
//		{
//			right.push_back(judge[i]);
//		}
//		//左子树为空，或者绝对小于根的值，
//	   //右子树则为空，判断是否都大于根节点的值
//		for (auto e : right)
//		{
//			if (e < root)
//			{
//				return false;
//			}
//		}
//		return judgeord(left) && judgeord(right);
//	}
//	bool VerifySquenceOfBST(vector<int> sequence) {
//		int lengthsize = sequence.size();
//		if (lengthsize == 0)
//		{
//			return false;
//		}
//		bool ret = false;
//		ret = judgeord(sequence);
//		if (ret)
//		{
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//
//};