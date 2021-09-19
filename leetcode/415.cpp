#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        string res = "";
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        int minlen = min(num1.size(), num2.size());
        string temp = num1.size() > num2.size() ? num1 : num2;
        int c=0;
        for (int i = 0; i <= temp.size() - 1; i++)
        {
            if (i < minlen)
            {
                if ((num1[i] - '0') + (num2[i] - '0') + c >= 10)
                {
                    res += num1[i] - '0' + num2[i] - 10 + c;
                    c = 1;
                }
                else
                {
                    res += num1[i] - '0' + num2[i] + c;
                    c = 0;
                }
            }
            else
            {
                if((temp[i] - '0') + c >= 10){
                    res += temp[i] - 10 + c ;
                    c = 1;
                }
                else{
                    res += temp[i] + c;
                }
            }
        }
        if(c == 1) res += '1';
        reverse(res.begin(), res.end());
        return res;
    }
};

// 2.0
class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int cnt = 0 , carry = 0;
        string res;
        while(cnt < num1.size() || cnt < num2.size()){
            char a = cnt < num1.size() ? num1[cnt] : '0';
            char b = cnt < num2.size() ? num2[cnt] : '0';
            char c = a + b + carry - '0';
            carry = 0;
            if(c > '9'){
                c = c - 10;
                carry = 1;
            }
            res += c;
            cnt++;
        }
        if(carry == 1) res += '1';
        reverse(res.begin(),res.end());
        return res;
    }
};