#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a, b, res;
    multimap<int, int> key;

    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        multimap<int, int>::iterator m, beg, end; //写在其他地方报错
        m = key.find(a);
        beg = key.lower_bound(a);
        end = key.upper_bound(a);
        for(m = beg; m != end; m++)
        {
            
        }
        key.insert(make_pair(a,b));
    }

}