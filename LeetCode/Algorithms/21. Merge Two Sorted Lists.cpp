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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* root = NULL, *tmp;
        
        if(!l1 && l2)
            return l2;
        else if(l1 && !l2)
            return l1;
        else if (!l1 && !l2)
            return {};
        if(l1->val <= l2->val){
            root = l1;
            l1 = l1->next;
        }
        else{
            root = l2;
            l2 = l2->next;
        }
        root->next = NULL;
        tmp = root;
        ListNode *insert;
        while(l1 && l2){
            if(l1->val <= l2->val){
                insert = l1;
                l1 = l1->next;
            }
            else{
                insert = l2;
                l2 = l2->next;
            }
            insert->next = NULL;
            tmp->next = insert;
            tmp = tmp->next;
        }
        if(l1) tmp->next = l1;
        if(l2) tmp->next = l2;
        return root;
    }
};
//recursive, dummy node