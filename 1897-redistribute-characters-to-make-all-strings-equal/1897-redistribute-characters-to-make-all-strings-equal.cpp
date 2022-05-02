class Solution {
public:
    bool makeEqual(vector<string>& words) {
        std::ios::sync_with_stdio(0);
        cin.tie(0);
        int c[26] = {};
        for (string const& s : words)
            for (char ch : s)
                c[ch - 'a']++;
        for (int i = 0; i < 26; i++)
            if (c[i] % words.size() != 0)
                return false;
        return true;
    }
};