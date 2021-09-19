#include <bits/stdc++.h>
using namespace std;

struct node{
    int a;
    node *next;
    node(int _a,node *_next):a(_a),next(_next){}
};

int main(){
    node *c=new node(0, nullptr);
    node *d=new node(1,c);
    node e(0, nullptr);
    node *f = d;
    cout<<d->next->a<<" "<<d->a<<endl;
    cout<<c<<" "<<d->a<<endl;
    int a = 1;
    int *b = &a;
    cout << a << " " << b << " " << *b << endl;
    if(f == d)  cout << "true";
    return 0;
}