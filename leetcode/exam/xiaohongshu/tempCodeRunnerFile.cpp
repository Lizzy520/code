#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, key;
    vector<int> flag;
    cin >> s;
    cin >> key;
    int len = key.size();
    int cnt = 0, index;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '=' && !(s[i - len -1] >= 'a' && s[i - len -1] <= 'z' ||s[i - len -1] >= 'A' && s[i - len -1] <= 'Z'||s[i - len -1] >= '0' && s[i - len -1] <= '9'))
        {
            flag.push_back(i - len);
        }
    }
    // cout<<flag[0]<<endl;
    for(int i : flag)
    {
        for(int j = 0; j < len; j++)
        {
            if(s[i++] == key[j])
            {
                cnt++;
            }
            else{
                cnt = 0;
                break;
            }
        }
        if(cnt == len)
        {
            index = i + 1;
        }
        else index = -1;
    }
    // cout<<index<<endl;
    if(index == -1) cout << "false" << endl;
    else
    {
        while(s[index] >= '0' && s[index] <= '9' || s[index] >= 'a' && s[index] <= 'z' ||s[index] >= 'A' && s[index] <= 'Z')
        {
            cout << s[index];
            index++;
        }
    }

}