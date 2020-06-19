//// constructing multimaps
//#include <iostream>
//#include <map>
//
//bool fncomp(char lhs, char rhs) { return lhs < rhs; }
//
//struct classcomp {
//	bool operator() (const char& lhs, const char& rhs) const
//	{
//		return lhs < rhs;
//	}
//};
//
//int main()
//{
//	std::multimap<char, int> first;
//
//	
//	first.insert(std::pair<char, int>('b', 15));
//	first.insert(std::pair<char, int>('b', 20));
//	first.insert(std::pair<char, int>('c', 25));
//    first.insert(std::pair<char, int>('a', 10));
//	std::multimap<char, int> second(first.begin(), first.end());
//
//	std::multimap<char, int> third(second);
//
//	std::multimap<char, int, classcomp> fourth;                 // class as Compare
//
//	bool(*fn_pt)(char, char) = fncomp;
//	std::multimap<char, int, bool(*)(char, char)> fifth(fn_pt); // function pointer as comp
//	for (auto&e:first )
//	{
//		std::cout << e.first << " " << e.second << std::endl;
//	}
//	system("pause");
//	return 0;
//}
//
///* 链接：https://www.nowcoder.com/questionTerminal/947f6eb80d944a84850b0538bf0ec3a5?f=discussion
//来源：牛客网
//
//class Solution {
//public:
//	TreeNode* Convert(TreeNode* pRootOfTree)
//	{
//		if(pRootOfTree == nullptr) return nullptr;
//		TreeNode* pre = nullptr;
//
//		convertHelper(pRootOfTree, pre);
//
//		TreeNode* res = pRootOfTree;
//		while(res ->left)
//			res = res ->left;
//		return res;
//	}
//
//	void convertHelper(TreeNode* cur, TreeNode*& pre)
//	{
//		if(cur == nullptr) return;
//
//		convertHelper(cur ->left, pre);
//
//		cur ->left = pre;
//		if(pre) pre ->right = cur;
//		pre = cur;
//
//		convertHelper(cur ->right, pre);
//
//
//
//	}
//}; */


/* vector<bool> mem(n, true);
		for (int i = 0; i < n; ++i)
		{
			if (first[i] > second[i])
			{
				mem[i] = false;
				ret++;
			}
		}
		vector<int> ok;

		for (int i = 0; i < n; ++i)
		{
			vector<int> v1;
			vector<int> v2;
			if (mem[i] == true)
			{
				int tmp = first[i];//出发名次；
				for (int j = 0; j < n; ++j)
				{
					if (tmp > first[j])
					{
						v1.push_back(j);
					}
				}
				for (auto e : v1)
				{
					if (second[e] > tmp)
					{
						ret++;
						break;
					 }
				}

			}
		} */