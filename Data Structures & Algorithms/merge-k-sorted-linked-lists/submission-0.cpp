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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> nums;

        ListNode *curr;
        for(int i=0;i<lists.size();i++)
        {
          ListNode *curr=lists[i];
         while(curr!=nullptr)
        {
            nums.push_back(curr->val);
            curr=curr->next;
        }

        }
        
        sort(nums.begin(),nums.end());
         if(nums.empty())
          return nullptr;
        ListNode *head=new ListNode(nums[0]);
        curr=head;
        for(int i=1;i<nums.size();i++)
        {
           curr->next =new ListNode(nums[i]);
           curr=curr->next;
        }
        return head;
    }
};
