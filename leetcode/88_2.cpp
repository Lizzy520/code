#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res;
        int l = m - 1;
        int r = n - 1;
        while(l >= 0 && r >= 0)
        {
            if(nums1[l] <= nums2[r])
            {
                nums1[l + r + 1] = nums2[r];
                r--;
            }
            else
            {
                nums1[l + r + 1] = nums1[l];
                l--;
            }

        }
        while(r >= 0)
        {
            nums1[r] = nums2[r];
            r--;
        }
    }
};