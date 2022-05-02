class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string cat;
        for (int i = 0; i < words.size(); i++) {
            cat += words[i];
            if (cat == s)
                return true;
        }
        return false;
    }
};