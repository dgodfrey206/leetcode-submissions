class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int c[26] = {};
        for (int i = 0; i < words[0].size(); i++)
            c[words[0][i]-'a']++;
        for (int i = 1; i < words.size(); i++) {
            int count[26] = {};
            for (int j = 0; j < words[i].size(); j++)
                count[words[i][j]-'a']++;
            for (int i = 0; i < 26; i++) 
                if (count[i] == 0)
                    c[i] = 0;
                else
                    c[i] = min(c[i], count[i]);
        }
        vector<string> res;
        for (int i = 0; i < 26; i++) {
            if (c[i])
                for (int j = 0; j < c[i]; j++)
                    res.push_back(string(1, i + 'a'));
        }
        return res;
    }
};