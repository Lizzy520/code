#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> temp;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(temp.count(target-nums[i])){
                res.push_back(i);
                res.push_back(temp[target-nums[i]]);
                break;
            }
            else{
                temp[nums[i]]=i;
            }
        }
        return res;
    }
};
