#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.size();
    vector<int> dp(len + 1);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = s[0] == '1' ? 2 : 1;
    for(int i = 3; i <= len; i++)
    {
        dp[i] = dp[i - 1];
        if(s[i - 2] == '1')
        {
            dp[i] += dp[i - 2];
        }
        if(s[i - 3] == '1')
        {
            dp[i] += dp[i - 3];
        }
    }
    cout << dp[len] << endl;
    return 0;
}