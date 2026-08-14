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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> arr;
        ListNode *curr=list1;
        while(curr!=nullptr)
        {
          int val=curr->val;
          arr.push_back(val);
          curr=curr->next;
        }
        curr=list2;
        while(curr!=nullptr)
        {
          int val=curr->val;
          arr.push_back(val);
          curr=curr->next;
        }
        sort(arr.begin(),arr.end());

        if(arr.empty())
        return nullptr;
        ListNode *res=new ListNode(arr[0]);
        curr=res;
        for(int i=1;i<arr.size();i++)
        {
            curr->next=new ListNode(arr[i]);
            curr=curr->next;
        }
        return res;
    }
};
