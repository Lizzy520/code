#include <bits/stdc++.h>
using namespace std;
// 二分法找其左边界和右边界
// 主函数
vector<int> searchRange(vector<int> &nums, int target)
{
    if (nums.empty())
        return vector<int>{-1, -1};
    int lower = lower_bound(nums, target);
    int upper = upper_bound(nums, target) - 1; // 这里需要减1位
    if (lower == nums.size() || nums[lower] != target)
    {
        return vector<int>{-1, -1};
    }
    return vector<int>{lower, upper};
}
// 辅函数
int lower_bound(vector<int> &nums, int target)
{
    int l = 0, r = nums.size(), mid;
    while (l < r)
    {
        mid = (l + r) / 2;
        if (nums[mid] >= target)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return l;
}
// 辅函数
int upper_bound(vector<int> &nums, int target)
{
    int l = 0, r = nums.size(), mid;
    while (l < r)
    {
        mid = (l + r) / 2;
        if (nums[mid] > target)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return l;
}