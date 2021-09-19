#include <bits/stdc++.h>
using namespace std;

class ReverseStack {
public:
    vector<int> reverseStackRecursively(vector<int> stack, int top) {
        // const int temp=;
        if(top) return stack;
        else{ 
            stack[stack.size()-top]=stack[top-1];
            top=top-1;
            return reverseStackRecursively(stack,top);
        }
    }
};