class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i < words.size(); i++) {
            string s = words[i];
            int l = 0, r = s.length() - 1;
            
            while(l < r) {
                if(s[l] != s[r])
                    break;
                l++;
                r--;
            }
            
            if(l >= r)
                return s;
        }
        
        return "";
    }
};