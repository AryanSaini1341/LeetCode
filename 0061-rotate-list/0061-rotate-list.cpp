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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next==NULL) return head;
        int size = 1;
        ListNode *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
            size++;
        }
        k = k%size;
        ListNode *tail = head;
        ListNode *pre  = head;
        int count = 0;
        while(count != k){
            tail = head;
            pre = head;
            while(tail->next!=NULL){
                tail = tail->next;
            }
            while(pre->next->next!=NULL){
                pre = pre->next;
            }
            pre->next= NULL;
            tail->next = head;
            head = tail;
            count++;
        }
        return head;
    








        // int point = count-k;
        // int till = 1;
        // ListNode* temp = head;
        // while(till!=point){
        //     temp = temp->next;
        //     till++;
        // }
        // temp->next=NULL;
        // tail->next=head;
        // head = tail;
        // return head;
    }
};