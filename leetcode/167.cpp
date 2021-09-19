#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int len = numbers.size();
        int l = 0, r = len - 1;
        while(l < r)
        {
            if(numbers[l] + numbers[r] == target)
            {
                res.push_back(l + 1);
                res.push_back(r + 1);
                break;
            }
            if(numbers[l] + numbers[r] < target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return res;
    }
};