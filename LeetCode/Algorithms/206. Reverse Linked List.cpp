class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)    return NULL;
        
        ListNode *pre = NULL, *cur = head, *next = head->next;
        
        while(next){
            cur->next = pre;
            pre = cur;
            cur = next;
            next = next->next;
        }
        cur->next = pre;
        return cur;
    }
};
/*
revursive
*/