#include <bits/stdc++.h>
using namespace std;

int candy(vector<int>& ratings) {
    int len = ratings.size();
    int arr[len];
    // vector<int> arr(len,1);
    int res = 0;
    for(int i = 0; i < len; i++)    arr[i] = 1;
    for(int i = 1; i < len; i++)
    {
        if(ratings[i - 1] < ratings[i])
        {
            arr[i] = arr[i - 1] + 1;
        }
    }
    for(int i = len - 1; i > 0; i--)
    {
        if(ratings[i - 1] > ratings[i] && arr[i - 1] <= arr[i])
        {
            arr[i - 1] = arr[i] + 1;
        }
        res += arr[i];
    }
    res += arr[0];
    return res;
}

int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(2);
    cout << candy(a) << endl;
}