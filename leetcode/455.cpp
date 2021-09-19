#include <bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
    int i = 0, j = 0;
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    while(i < g.size() && j < s.size())
    {
        if(s[j] >= g[i])
        {
            i++;
        }
        j++;
    }
    return i;
}

int main()
{
    vector<int> g, s;
    g.push_back(10);
    g.push_back(9);
    g.push_back(8);
    g.push_back(7);
    s.push_back(5);
    s.push_back(6);
    s.push_back(7);
    s.push_back(8);
    cout << findContentChildren(g,s);
}