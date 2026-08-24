class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* s = head;
        ListNode* f = head;
        bool cycle = false;
        while(f!=NULL && f->next!=NULL){
            s = s->next;
            f = f->next->next;
            if(s==f){
                cycle = true;
                 break;
            }
        }
        if(cycle == true){
            ListNode* temp = head;
            while(temp!=s){
                s = s->next;
                temp = temp->next;
            }
            return temp;
        }
        else return NULL;
    }
};