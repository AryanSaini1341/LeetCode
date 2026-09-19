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
 int size(ListNode* start){
    int s = 0;
    if(start == NULL) return s;
    ListNode* temp = start;
    while(temp!=NULL){
        temp = temp->next;
        s++;
    }
    return s;
 }
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int L = size(head);
        if(L==0) return head;
        if(L==1){
            head = NULL;
            return head;
        }
        int count = 1;
        ListNode* temp = head;
        ListNode* pre = head;
        while(count!=L/2+1){
            temp = temp->next;
            count++;
        }
        count = 1;
        while(count!=L/2){
            pre = pre->next;
            count++;
        }
        pre ->next = temp->next;
        delete temp;
        return head;
    }
};