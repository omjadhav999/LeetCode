/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* curr=head;
        stack<ListNode*> stk;

        while(curr != nullptr){
            while(!stk.empty() && stk.top()->val < curr->val) stk.pop();

            stk.push(curr);
            curr = curr->next;
        }

        ListNode* nxt=nullptr;
        while(!stk.empty()){
            curr = stk.top();
            stk.pop();
            curr->next = nxt;
            nxt = curr;
        }
    
    return curr;
    }
};