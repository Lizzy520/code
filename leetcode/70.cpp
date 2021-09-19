#include <bits/stdc++.h>
using namespace std;
// 超时
int d(int n) {
    if(n <= 2) return n;
    else
    {
        return d(n - 1) + d(n - 2);
    }
}

// 1.0
int climbStairs(int n) {
    vector<int> dp(n + 1);
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

// 2.0 空间压缩
int lessSpace(int n) {
    int pre2 = 1, pre1 = 2, curr;
    if(n <= 2)  return n;
    else
    {
        for(int i = 3; i <= n; i++)
        {
            curr = pre1 + pre2;
            pre2 = pre1;
            pre1 = curr;
        }
    }
    return curr;
}

int main() {
    int n;
    cin >> n;
    cout << climbStairs(n);
}