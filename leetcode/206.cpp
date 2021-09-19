#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *pre = nullptr,*next;
        while(head!=nullptr){  
            // temp_head=head;
            next=head->next;
            head->next=pre;
            pre=head;
            head=next;
        }
        return pre;
    }
};

class Solution {
public:
    ListNode *reverseList(ListNode *head, ListNode *pre)
    {
        if(head==nullptr)
        {
            return pre;
        }
        ListNode *next;
        next=head->next;
        head->next=pre;
        return reverseList(next,head);
        
    }
    ListNode *reverseList(ListNode *head)
    {
        // ListNode *pre=nullptr;
        return reverseList(head,nullptr);

    }
};