class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if (left == right) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        // Find node BEFORE left
        ListNode* before = dummy;

        for (int i = 1; i < left; i++) {
            before = before->next;
        }

        // Reverse from left to right
        ListNode* curr = before->next;
        ListNode* prev = nullptr;

        for (int i = left; i <= right; i++) {
            ListNode* next = curr->next;

            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Connect
        before->next->next = curr;
        before->next = prev;

        return dummy->next;
    }
};