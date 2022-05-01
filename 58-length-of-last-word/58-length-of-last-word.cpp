class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i])) {
                int j = i;
                while (j <= s.size()) {
                    if (j == s.size())
                        return j - i;
                    if (!isalpha(s[j]))
                        return j - i;
                    j++;
                }
            }
        }
        return 0;
    }
};