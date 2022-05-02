class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string catA, catB;
        for (string x : word1)
            for (char ch : x)
                catA += ch;
        for (string x : word2)
            for (char ch : x)
                catB += ch;
        return catA == catB;
    }
};