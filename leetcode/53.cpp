#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int res=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(res<sum){
                res=sum;
            }
            if(sum<0) sum=0;
        }
        return res;
    }
};