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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int>copy;
        ListNode *curr=head;
        while(curr!=nullptr)
        {
            copy.push_back(curr->val);
            curr=curr->next;
        }
        if(copy.size() == 1)
        return nullptr;
       
        int index=copy.size()-n;
        copy.erase(copy.begin() + index);
        curr = head;
        for (int x : copy) {
            curr->val = x;
            curr = curr->next;
        }
        curr=head;
        
         while(curr->next->next!= nullptr) {
        curr = curr->next;
           }
           curr->next=nullptr;


        return head;

        




    }
};
