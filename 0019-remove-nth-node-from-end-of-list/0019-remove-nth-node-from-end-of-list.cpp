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
        int size = 0;
        ListNode* temp = head;
        ListNode* stemp = head; // Using This For Size
        while(stemp!=NULL){
            size++;
            stemp=stemp->next;
        }
        int i = 1;
        if(n==size){
            head=head->next;
            return head;
        }
        while(i!=size-n){
            i++;
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
    
};