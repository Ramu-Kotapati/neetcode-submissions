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
        ListNode *tmp=head;
        ListNode *prevlast=nullptr;
        while(tmp!=nullptr)
        {
           ListNode *kth=getkthnode(tmp,k);
           if(!kth)
           {
            if(prevlast)prevlast->next=tmp;
            break;
           }
           ListNode *nextnode=kth->next;
           kth->next=nullptr;
           reverselinkedlist(tmp);
           if(tmp==head)
           {
            head=kth;
           }
           else
           {
            prevlast->next=kth;

           }
           prevlast=tmp;
           tmp=nextnode;



        }

        return head;

        
    }
    private:
    ListNode * getkthnode(ListNode* head,int k)
    {
        k=k-1;
       while(head!=nullptr&&k>0)
       {
        k--;
        head=head->next;
       
       }

       return head;
    }

    ListNode * reverselinkedlist(ListNode * head)
    {
        ListNode * curr=head;
        ListNode *pre=nullptr;
        while(curr!=nullptr)
        {
            ListNode *tmp=curr->next;
            curr->next=pre;
            pre=curr;
            curr=tmp;

        }
        return curr;
    }
};
