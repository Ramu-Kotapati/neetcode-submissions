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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int>arr;
        ListNode *curr=head;
        while(curr)
        {
           arr.push_back(curr->val);
           curr=curr->next;
        }
        for(int i=0;i+k<=arr.size();i=i+k)
        {
            reverse(arr.begin()+i,arr.begin()+i+k);
        }

        ListNode *res=new ListNode();
         curr=res;
        for(int num : arr)
        {
            curr->next=new ListNode(num);
            curr=curr->next;
        }

        return res->next;
        
    }
};
