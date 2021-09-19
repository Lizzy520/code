#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* Node()
{
    ListNode* ptr3 = new ListNode(3);
    return ptr3;
}

int main()
{
    // 进入函数，分配栈空间
    // 通过 类型 变量名定义的分配在函数的栈空间中，通过 new 来创建的，分配在离散的堆空间中，切割出所需的堆空间后，将剩余空间还回去
    ListNode head(0);   //head 在这个函数的栈空间中
    cout << head.val << endl;
    ListNode* ptr;  //ptr2 在这个函数的栈空间中
    ptr = &head;
    cout << (*ptr).val << endl; //*ptr为它的值，即head
    cout << &ptr << " " << ptr << " " << &head << endl;
    ListNode* ptr2 = new ListNode(1);   //栈空间中的ptr2指向这个堆空间
    cout << ptr2->val << endl;
    delete ptr2; //要delete才能把指针指向的堆空间释放
    ptr2 = Node();
    cout << ptr2->val << endl;
    delete ptr2;
    return 0;
}
