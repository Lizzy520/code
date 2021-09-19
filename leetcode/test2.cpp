#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    sort(v.begin(), v.end());
    for(auto it = v.begin(); it < v.end(); it++)
    {
        cout<<*it<<endl;
    }
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    vector<int> v2(10, 0);
    cout << v2.size() << endl;
    cout << v2.capacity() << endl;
    v2.push_back(4);
    cout << v2.size() << endl;
    cout << v2.capacity() << endl;
    v2[4] = 5;
    for(int& num : v2)
    {
        cout << num << endl;
    }
    unordered_map<int ,int> m={
        {1,11},{2,22},{3,33}
    };
    return 0;
}