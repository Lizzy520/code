#include <bits/stdc++.h>
using namespace std;

bool cmp(vector<int>& a, vector<int>& b)
{
    return a[1] < b[1];
}

int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    int res = 0;
    sort(intervals.begin(), intervals.end(), cmp);
    int pre = intervals[0][1];
    for(int i = 1; i < intervals.size(); i++)
    {
        if(intervals[i][0] < pre)
        {
            res++;
        }
        else
        {
            pre = intervals[i][1];
        }

    }
    return res;
}

int main(){
    vector<vector<int>> intervals;
    intervals.push_back({1,2});
    intervals.push_back({2,3});
    intervals.push_back({3,4});
    intervals.push_back({1,3});
    cout << eraseOverlapIntervals(intervals) << endl;
}