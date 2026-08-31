class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* s = head;
        ListNode* f = head;

        if(head == NULL) return head;

        while(head != NULL && head->val == val){
            head = head->next;
            temp = head;
            s = head;
            f = head;
        }

        while(temp != NULL){
            f = temp->next;

            if(f != NULL && f->val == val){
                temp->next = f->next;
            }
            else{
                temp = temp->next;
            }
        }

        return head;
    }
};