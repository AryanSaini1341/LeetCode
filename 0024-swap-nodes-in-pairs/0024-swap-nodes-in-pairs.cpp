class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* prepre = NULL;
        ListNode* pre = head;
        ListNode* post = head->next;
        head = post;
        while (post != NULL) {
            ListNode* temp = post->next;
            post->next = pre;
            pre->next = temp;
            if (prepre != NULL)
                prepre->next = post;
            prepre = pre;
            pre = temp;

            if (pre == NULL)
                break;

            post = pre->next;
        }
        return head;
    }
};