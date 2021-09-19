#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, res = 0;
    string s;
    map<string, double> key;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        key[s]++;
    }
    for(auto it : key)
    {
        if((it.second / n) * 100 >= 1) res++;
    }
    cout << res << endl;
}