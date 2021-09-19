#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int l = 0, r = nums.size() - 1, mid;
        while(l <= r)
        {
            mid = l + (r - l) / 2;
            if(nums[mid] == target)
            {
                l = mid;
                r = mid;
                while(l - 1 >= 0 && nums[l - 1] == target)    l--;
                while(r + 1 <= nums.size() - 1 && nums[r + 1] == target)    r++;
                res.push_back(l);
                res.push_back(r);
                return res;
            }
            else if(target < nums[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        res.push_back(-1);
        res.push_back(-1);
        return res;
    }
};