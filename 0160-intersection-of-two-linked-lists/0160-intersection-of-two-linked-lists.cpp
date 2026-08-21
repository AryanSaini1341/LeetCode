/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = 0;
        int l2 =0;
        ListNode* temp = headA;
        while(temp!=NULL){
            l1++;
            temp = temp->next;
        }
        ListNode* temp2 = headB;
        while(temp2!=NULL){
            l2++;
            temp2 = temp2->next;
        }
        ListNode* tempo1 = headA;
        ListNode* tempo2 = headB;
        while(l1>l2){
            l1--;
            tempo1 = tempo1->next;
        }
        while(l2>l1){
            l2--;
            tempo2 = tempo2->next;
        }
        while(tempo1!=tempo2){
            tempo1 = tempo1->next;
            tempo2 = tempo2->next;
        }
        return tempo1;
    }
};