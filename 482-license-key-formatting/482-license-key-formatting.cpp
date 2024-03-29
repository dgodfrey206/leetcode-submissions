class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string res;
        int count = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (isalnum(s[i])) {
                res += toupper(s[i]);
                if (++count % k == 0) 
                    res += "-";
            }
        }
        if (res.back() == '-') res.pop_back();
        reverse(res.begin(), res.end());
        return res;
    }
};