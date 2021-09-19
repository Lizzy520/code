#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr,temp, res;
    unordered_map<int, int> key;
    int n;
    string s;
    getline(cin, s);
    istringstream ss(s);
    int a;
    for(int i = 0; i < (s.size() + 1) / 2; i++)
    {
        ss >> a;
        arr.push_back(a);
    }
    cin >> n;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < (s.size() + 1) / 2; i++)
    {
        key[arr[i]]++;
    }
    for(auto it = key.begin(); it != key.end(); it++)
    {
        temp.push_back(it->second);
        // cout << it->first;
    }
    sort(temp.begin(),temp.end());
    int flag;
    if(temp.size() >= n)
    {
         for(auto it = key.begin(); it != key.end(); it++)
        {
            if(it -> second == temp[n-1]){
                // cout<< it -> first << " " << it -> second << endl;
                res.push_back(it -> first);
            }

        }
    }
    else{
        res.push_back(-1);
        // cout<< "-1" << " " << "-1";
    }
    for(int i = 0; i < temp.size(); i++)
    {
        cout<<temp[i]<<"%%"<<endl;
    }
    sort(res.begin(),res.end());
    for(int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<"&"<<endl;
        if(res[i] == -1)    cout<< "-1" << " " << "-1";
        else
        {
            cout << res[i] << " " << key[res[i]] << endl;
        }

    }
    return 0;
}