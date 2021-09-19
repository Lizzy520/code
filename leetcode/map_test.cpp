#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> m = {
        {0,0},
        {3,3},
        {2,2},
        {5,5},
        {4,4},
        {6,6}
    };
    for(auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    map<int, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << it->second << endl;
    }
    for(auto i = m.begin(); i != m.end(); i++)
    {
        cout << i->first << " " << i->second << endl;
    }
    return 0;
}