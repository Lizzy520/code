#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        int flag = 0;
        if(fast && fast -> next)
        {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        else    return nullptr;

        while(fast && fast -> next)
        {
            if(flag == 0)
            {
                if(fast == slow)
                {
                    flag++;
                    fast = head;
                }
                else
                {
                    fast = fast -> next ->next;
                    slow = slow -> next;
                }
            }
            else
            {
                if(fast == slow)    return fast;
                else
                {
                    fast = fast -> next;
                    slow = slow -> next;
                }

            }

        }
        return nullptr;
    }
};