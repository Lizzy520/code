#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> key={
            {'{' , '}'}, {'[' , ']'}, {'(' , ')'}
        };
        stack<char> left;
        for(int i = 0; i < s.size(); i++){
            if(key.count(s[i])){
                left.push(s[i]);
            }
            else{
                if(!left.empty() && s[i] == key[left.top()]){
                    left.pop();
                }
                else{
                    return false;
                }
            }
        }
        return left.empty();
    }
};