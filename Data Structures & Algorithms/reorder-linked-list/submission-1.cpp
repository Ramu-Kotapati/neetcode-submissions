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
    void reorderList(ListNode*& head) { //notice the reference operator
        vector<int> arr;
        vector<int>res;
        ListNode *curr=head;
        while(curr!=nullptr)
        {
            arr.push_back(curr->val);
            curr=curr->next;
        }
        int i=0;
        int j=arr.size()-1;
        while(i<j)
        {
            res.push_back(arr[i]);
            i++;
            res.push_back(arr[j]);
            j--;
        }

        if(i==j)
        {
            res.push_back(arr[i]);
        }

        ListNode * result=new ListNode(res[0]);
         curr=result;
        for(int i=1;i<res.size();i++)
        {
            curr->next=new ListNode(res[i]);
            curr=curr->next;
        }
       head=result; //this is correct in this function only , but outside the original head cannot be changed , so we use reference in function parameter
                
        



    }
};   
