class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int c[26] = {};
        for (string s : words)
            for (char ch : s)
                c[ch - 'a']++;
        for (char i = 'a'; i <= 'z'; i++)
            if (c[i - 'a'] % words.size() != 0)
                return false;
        return true;
    }
};