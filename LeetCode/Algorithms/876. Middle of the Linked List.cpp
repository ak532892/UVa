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
    ListNode* middleNode(ListNode* head) {
        int n = 0;
        ListNode *traversal = head;
            
        while(traversal){
            traversal = traversal->next;
            n++;
        }
        traversal = head;
        
        int tmp = 0;
        
        while(traversal){
            if(tmp == n/2)  break;
            traversal = traversal->next;
            tmp++;
        }
        
        return traversal;
    }
};
/*
slow and fast, double next
*/