class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;

        int size = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            size++;
            temp = temp->next;
        }

        int each = size / k;
        int extra = size % k;

        temp = head;

        for (int i = 0; i < k; i++) {

            ans.push_back(temp);

            int len = each;

            if (extra > 0) {
                len++;
                extra--;
            }

            for (int j = 1; j < len; j++) {
                temp = temp->next;
            }

            if (temp != NULL) {
                ListNode* nextPart = temp->next;
                temp->next = NULL;
                temp = nextPart;
            }
        }

        return ans;
    }
};