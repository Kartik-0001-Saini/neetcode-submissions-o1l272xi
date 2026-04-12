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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || left == right) return head;


        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* leftNode = dummy;
        // Target to left Node for first..
        for(int i=1; i<left; i++){
            leftNode = leftNode->next;
        }

        // Target for Reversing the list..
        ListNode* prev = NULL;
        ListNode* curr = leftNode->next;
        for(int i=0; i<=right-left; i++){
            ListNode* next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }

        leftNode->next->next = curr;
        leftNode->next = prev;

        return dummy->next;
    }
};