#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
    return a < b;
}

int main()
{
    vector<int> a = {3,6,2,4,5};
    sort(a.begin(), a.end(), cmp);
    for(int i : a)
    {
        cout << i <<endl;
    }
}