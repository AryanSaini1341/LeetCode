class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<char> s;

        for(int i = 0; i < sentence.size(); i++) {
            if(s.size() != 0) {
                int check = 0;

                for(int j = 0; j < s.size(); j++) {
                    if(sentence[i] == s[j])
                        check++;
                }

                if(check == 0)
                    s.push_back(sentence[i]);
            }
            else {
                s.push_back(sentence[i]);
            }
        }

        if(s.size() == 26)
            return true;
        else
            return false;
    }
};