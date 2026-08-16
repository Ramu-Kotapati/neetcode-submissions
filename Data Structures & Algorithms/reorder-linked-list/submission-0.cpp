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
    void reorderList(ListNode* head) {
        vector<int> arr;
        vector<int> res;
        ListNode* curr = head;
        while (curr != nullptr) {
            arr.push_back(curr->val);
            curr = curr->next;
        }
        int i = 0;
        int j = arr.size() - 1;
        while (i < j) {
            res.push_back(arr[i]);
            i++;
            res.push_back(arr[j]);
            j--;
        }
        if (i == j) {
            res.push_back(arr[i]);
        }

        curr = head;
        for (int x : res) {
            curr->val = x;
            curr = curr->next;
        }
    }
};
