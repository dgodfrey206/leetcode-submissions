class Solution {
public:
    int balancedStringSplit(string s) {
        int left = 0, right = 0;
        int maxStrings = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'L')
                left++;
            if (s[i] == 'R')
                right++;
            if (left == right) {
                maxStrings++;
                left = right = 0;
            }
        }
        return maxStrings;
    }
};