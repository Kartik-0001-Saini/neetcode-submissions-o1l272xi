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
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next;
            count+=1;
        }

        if(count == n){
            ListNode* toDel = head;
            head = head->next;
            delete toDel;
            return head;
        }

        int step = count - n;
        temp = head;
        for(int i=0; i<step-1; i++){
            temp = temp->next;
        }

        ListNode* toDel = temp->next;
        temp->next = temp->next->next;
        delete toDel;

        return head;
    }
};
