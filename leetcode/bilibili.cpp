#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, res = 0;
    cin >> n;
    for(int i = 1; i <= n; i += 2)
    {
        res += i;
    }
    cout << res <<endl;
    return 0;
}