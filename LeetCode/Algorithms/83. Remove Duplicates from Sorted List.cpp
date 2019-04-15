/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)   return NULL;
        
        ListNode *tmp = head, *pre = NULL;
        int prv = tmp->val;
        
        pre = tmp;
        tmp = tmp->next;
        while(tmp){
            while(tmp && tmp->val == prv){
                ListNode *del = tmp;
                tmp = tmp->next;
                delete del;
            }
            pre->next = tmp;
            if(tmp){
                prv = tmp->val;
                pre = tmp;
                tmp = tmp->next;
            }
        }
        return head;
    }
};
//next->next;