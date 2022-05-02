class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int c[26] = {};
        for (int i = 0; i < s.size(); i++)
            c[s[i] - 'a']++;
        for (int i = 1; i < s.size(); i++)
            if (c[s[i]-'a'] != c[s[i-1]-'a'])
                return false;
        return true;
    }
};