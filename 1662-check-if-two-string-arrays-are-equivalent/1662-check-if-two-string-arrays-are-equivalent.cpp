class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int a = 0, b = 0, i = 0, j = 0;
        while (i < word1.size() && j < word2.size()) {
            if (word1[i][a] != word2[j][b])
                return false;
            a++;
            b++;
            if (a >= word1[i].size()) {
                a = 0;
                i++;
            }
            if (b >= word2[j].size()) {
                b = 0;
                j++;
            }
        }
        return i == word1.size() && j == word2.size();
    }
};