#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    s = "123";
    cout << s << endl;
    s += "4";
    cout << s << endl;
    printf("%s\n", s.c_str());
    cout << s.back() << endl;
    s.front() == s[0];
    s.back() == s[s.size() - 1];
    cout << find(s.begin(), s.end(), '1') - s.begin() << endl;
    cout << find(s.begin(), s.end(), '6') - s.begin() << endl;
    if (find(s.begin(), s.end(), '6') != s.end())
    {
        cout << "find!" << endl;
    }
    else
    {
        cout << "Not find!" << endl;
    }
    string s2 = "cba";
    string s3 = "abd";
    cout << (s2 < s3) << endl;
    sort(s2.begin(), s2.end());
    cout << s2 << endl;
    int a[]={3,1,2};
    sort(a,a+3);
    s3.insert(s3.begin() + 2, 'c');
    cout << s3 << endl;
    cout<<s3.substr(1,2)<<endl;
    reverse(s3.begin(), s3.end());
    cout << s3 << endl;
    
    return 0;
}