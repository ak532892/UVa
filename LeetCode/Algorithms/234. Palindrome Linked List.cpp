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
    bool isPalindrome(ListNode* head) {
        vector<int> t;
        
        while(head){
            t.push_back(head->val);
            head = head->next;
        }
        for(int i = 0; i < t.size()/2; i++){
            if(t[i] != t[t.size()-i-1])
                return false;
        }
        return true;
    }
};
//reverse half, recursive