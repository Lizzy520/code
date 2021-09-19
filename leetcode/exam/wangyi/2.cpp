#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, str = "";
    int m, res = 0, maxN;
    int a;
    getline(cin, s);
    istringstream ss(s);
    for(int i = 0; i < s.size(); i++)
    {
        ss >> a;
        m = a;
    }
    int len = s.size();
    for(int i = 0; i < len; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z'){
            str += s[i];
        }
    }
    if(str.size() > 0)
    {
        res++;
        for(int i = 1; i < str.size(); i++)
        {
            res += abs(str[i] - str[i - 1]);
        }
        res += str.size() - 1;
        maxN = res;
        cout << maxN << endl;
        res = 1;
        cout << m << endl;
        if(m != 0)
        {
            int min_m = str.size() - m - 1;
            for(int i = 1; i < str.size(); i++)
            {
                int temp = m;
                for(int j = 1; j < str.size(); j++)
                {
                    if(temp > 0)
                    {
                        res++;
                        temp--;
                    }
                    else
                    {
                        res += abs(str[j] - str[j - 1]);
                    }
                    i++;
                }
                res += str.size() - 1;
                cout << res << endl;
                maxN = min(res, maxN);
            }
        }
    }
    cout << maxN << endl;
}