class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        int ans = 0;

        while (head != nullptr) {
            if (s.count(head->val) &&
                (head->next == nullptr || !s.count(head->next->val))) {
                ans++;
            }

            head = head->next;
        }

        return ans;
    }
};