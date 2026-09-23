class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int a = 0, b = 0;

        for(int i = 0; i < nums.size(); i++) {
            a += nums[i];

            int n = nums[i];
            while(n > 0) {
                b += n % 10;
                n /= 10;
            }
        }

        return abs(a - b);
    }
};