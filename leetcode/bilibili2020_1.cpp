#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum;
    int arr[100000];
    int i = 1, flag = 0;
    unordered_map<int,int> temp;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> sum;
    for(int i = 0; i < n; i++)
    {
        if(temp.count(sum - arr[i]))
        {
            cout << sum - arr[i] << " " << arr[i] <<endl;
        }
        else
        {
            temp[arr[i]] = i;
            flag++;
            if(flag == n)   cout << "notfound" << endl;
        }

    }

}