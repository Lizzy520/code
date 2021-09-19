#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<char> left;
    unordered_map<char, char> m = {
        {'{', '}'}, {'[', ']'}, {'(', ')'}
    };
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++)
    {
        if(m.count(str[i]))
        {
            left.push(str[i]);
        }
        else
        {
            if(!left.empty() && str[i] == m[left.top()])
            {
                left.pop();
            }
            else
            {
                // cout << "false" << endl;
                break;
            }

        }

    }
    if(left.empty())  cout << "true" <<endl;
    else cout << "false" <<endl;
}