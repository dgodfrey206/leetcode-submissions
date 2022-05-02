class Solution {
public:
    int maxDepth(string s) {
        int maxDepth = 0;
        int localDepth = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(')
                maxDepth = max(maxDepth, ++localDepth);
            if (s[i] == ')')
                localDepth--;
        }
        return maxDepth;
    }
};