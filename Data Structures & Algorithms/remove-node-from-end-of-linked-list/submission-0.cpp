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
        vector<int>res;
        int index=copy.size()-n;
        for(int i=0;i<copy.size();i++)
        {
            if(i==index)
            continue;
            res.push_back(copy[i]);
            
        }
        curr = head;
        for (int x : res) {
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
