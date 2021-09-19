#include <bits/stdc++.h>
using namespace std;

int main(){
    long n;
    vector<int> arr;
    string s;
    int res = 0;
    getline(cin, s);
    istringstream ss(s);
    for(int i = 0; i < s.size(); i++)
    {
        ss >> n;
        arr.push_back(s[i] - '0');
    }
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == 0) continue;
        else
        {
            if(n % arr[i] == 0) res++;
        }

    }
    cout << res << endl;
}