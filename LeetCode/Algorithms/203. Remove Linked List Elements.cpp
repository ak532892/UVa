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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* current = head, *pre = NULL;
        while(current && current->val == val)
            current = current->next;
        head = current;
        while(current){
            pre = current;
            current = current->next;
            while(current && current->val == val)
                current = current->next;
            pre->next = current;
        }
        return head;
    }
};
//dummy node, pointer to pointer