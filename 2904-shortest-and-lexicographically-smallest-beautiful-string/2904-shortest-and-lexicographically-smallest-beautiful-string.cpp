class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<string> v;

        for (int i = 0; i < s.length(); i++) {
            int count = 0;

            for (int j = i; j < s.length(); j++) {

                if (s[j] == '1')
                    count++;

                if (count == k) {
                    string store(j - i + 1, '0');
                    int o = 0;

                    for (int p = i; p <= j; p++) {
                        store[o] = s[p];
                        o++;
                    }

                    v.push_back(store);
                    break;
                }
            }
        }

        if (v.empty())
            return "";

        string best = v[0];

        for (int i = 1; i < v.size(); i++) {
            if (v[i].length() < best.length() ||
                (v[i].length() == best.length() && v[i] < best)) {
                best = v[i];
            }
        }

        return best;
    }
};