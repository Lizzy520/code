#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        // 2,4,5,6,7,8,9,10,11,0,1
        int l = 0, r = nums.size() - 1, mid;
        while(l <= r)
        {
            mid = l + (r - l) / 2;
            if(nums[mid] == target) return mid;
            else
            {
                if(nums[l] < nums[mid])
                {
                    if(nums[l] <= target && target <= nums[mid])
                    {
                        r = mid;
                    }
                    else
                    {
                        l = mid;
                        r = nums.size() - 1;
                    }

                }
            }
        }
    }
};
