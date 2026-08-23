class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> visited;

        ListNode* s = head;

        while (s != NULL) {
            if (visited.find(s) != visited.end()) {
                return s;   // cycle starts here
            }

            visited.insert(s);
            s = s->next;
        }

        return NULL; // no cycle
    }
};