class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> v;

        for(int i = 0; i < operations.size(); i++) {
            if(operations[i] == "C") {
                v.pop_back();
            }
            else if(operations[i] == "D") {
                v.push_back(2 * v.back());
            }
            else if(operations[i] == "+") {
                int n = v.size();
                v.push_back(v[n-1] + v[n-2]);
            }
            else {
                v.push_back(stoi(operations[i]));
            }
        }

        int ans = 0;

        for(int x : v)
            ans += x;

        return ans;
    }
};