#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        flowerbed.push_back(0);
        flowerbed.insert(flowerbed.begin(), 0);
        int count = 0, res = 0;
        for(int i = 0; i < flowerbed.size(); i++)
        {
            if(flowerbed[i] == 0)
            {
                count++;
            }
            else
            {
                count = 0;
            }
            if(count == 3)
            {
                res++;
                count = 1;
            }

        }
        return res >= n;
    }
};