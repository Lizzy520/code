#include <bits/stdc++.h>
using namespace std;
vector<int> dp(100010);

int niuniu(int n){
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    if(n <= 2)  return n;
    for(int i = 4; i <= n; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 3] + dp[i - 2]) % 10007;
    }
    return dp[n];
}

int main(){
    niuniu(100000);
    int t, a[110];
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < t; i++)
    {
        cout << dp[a[i]] << endl;
    }
    return 0;
}