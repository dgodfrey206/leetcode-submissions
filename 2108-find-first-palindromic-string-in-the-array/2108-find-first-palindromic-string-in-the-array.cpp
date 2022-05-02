class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++) {
            bool found = true;
            for (int j = 0; j < words[i].size()/2; j++) {
                if (words[i][j] != words[i][words[i].size() - j - 1])
                    found = false;
            }
            if (found)
                return words[i];
        }
        return "";
    }
};