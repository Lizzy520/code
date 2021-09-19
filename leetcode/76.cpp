#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string minWindow(string s, string t)
    {
        map<char, int> chars, flag;
        int min_l, min_len, l = 0, r = 1, count = 0, toBreak = 0;
        for (int i = 0; i < s.size(); i++)
        {
            chars[t[i]]++;
            flag[t[i]] = 0;
        }
        while (r < s.size())
        {
            if (!chars.count(s[l]))
            {
                l++;
                r++;
            }
            else
            {
                count++;
                flag[s[l]]++;
                while (count <= t.size())
                {
                    toBreak = 0;
                    if (!chars.count(s[r]) && r < s.size())
                        r++;
                    else
                    {
                        if (chars.count(s[r]) && r < s.size())
                        {
                            if (chars.count(s[l]) == chars.count(s[r]) && count <= 1 && flag[s[r]] < chars[s[r]])
                            {
                                l = r;
                                r++;
                            }
                            else if (flag[s[r]] < chars[s[r]] && count < t.size())
                            {
                                flag[s[r]]++;
                                count++;
                                r++;
                            }
                            if (count == t.size())
                            {
                                min_l = l;
                                min_len = r - l + 1;
                                count = 0;
                                for(auto it = flag.begin(); it != flag.end(); it++)
                                    it->second = 0;
                                while (count <= t.size())
                                {
                                    if (!chars.count(s[l]) && r < s.size())
                                        l++;
                                    else
                                    {
                                        count++;
                                        flag[s[l]]++;
                                        toBreak = 1;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    if(toBreak == 1)    break;
                }
            }
        }
        return  min_len < t.size() ? "" : s.substr(min_l, min_len);
    }
};