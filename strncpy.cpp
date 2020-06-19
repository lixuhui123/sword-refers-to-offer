//#include <iostream>
//#include <string.h>
//#include <time.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//class Solution {
//public:
//	bool IsContinuous(vector<int> numbers) {
//		int size = numbers.size();
//		if (size == 0)
//		{
//			return false;
//		}
//		sort(numbers.begin(), numbers.end());
//		int zero = 0;
//		for (auto it = numbers.begin(); it != numbers.end(); )
//		{
//			if ((*it) == 0)
//			{
//				++zero;
//				it = numbers.erase(it);
//			}
//			else
//			{
//				it++;
//			}
//		}
//		int sum = 0;
//		for (int i = 1; i < numbers.size(); ++i)
//		{
//			int sub = numbers[i] - numbers[i - 1];
//			if (sub == 1)
//			{
//				;
//			}
//			else if (sub == 0)
//			{
//				return false;
//			}
//			else
//			{
//				sum += (sub - 1);
//			}
//
//		}
//		if (zero == sum)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//		return false;
//	}
//};
//int main()
//{
//	Solution test;
//	vector<int> v{ 1,3,0,5,0 };
//	test.IsContinuous(v);
//	system("pause"); 
//	return 0;
//}