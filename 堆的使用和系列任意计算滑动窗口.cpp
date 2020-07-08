//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int longestSubarray(vector<int>& nums, int limit) {
//		if (nums.size() == 0)
//			return 0;
//		int len = nums.size();
//		int left = 0;
//		int right = 0;
//		int max_size = 0;
//		vector<pair<int, int>> max_heap;
//		make_heap(max_heap.begin(), max_heap.end(), less<pair<int, int>>());
//		
//		vector<pair<int, int>> min_heap;
//		make_heap(min_heap.begin(), min_heap.end(), greater<pair<int, int>>());
//		while (right < len)
//		{
//			max_heap.push_back(pair<int,int> (nums[right], right));
//			push_heap(max_heap.begin(), max_heap.end(), less<pair<int, int>>());
//			
//			min_heap.push_back(pair<int, int>(nums[right], right));
//			push_heap(min_heap.begin(), min_heap.end(), greater<pair<int, int>>());
//
//			int diff = max_heap[0].first - min_heap[0].first;
//
//			if (diff <= limit)
//			{
//				right++;
//				continue;
//			}
//			//最大差值超过设定，更新最大窗口的值
//			max_size = max(max_size, right-left);//不能使用堆的size，因为窗口中的不是最优解
//			//保证滑动窗口中的最大差值在要求的范围内
//			while (max_heap[0].first-min_heap[0].first>limit)
//			{
//				//去掉大顶堆中所有的在窗口之外的最大元素
//				while (max_heap[0].second<=left)
//				{
//					pop_heap(max_heap.begin(), max_heap.end(), less<pair<int, int>>());
//					max_heap.pop_back();
//				}
//				while (min_heap[0].second<=left)
//				{
//					pop_heap(min_heap.begin(), min_heap.end(), greater<pair<int, int>>());
//					min_heap.pop_back();
//				}
//				left++;
//			}
//		}
//		return max(max_size, right - left);
//	}
//};
//
//int main()
//{
//	vector<int> tmp{ 8,2,4,7 };
//	Solution test;
//	cout<<test.longestSubarray(tmp, 4);
//	system("pause"); 
//	return 0;
//}