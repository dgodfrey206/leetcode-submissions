class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_set<string> nums;
        int n = word.size();
        for (int i = 0; i < n; ) {
            while (i < n && !isdigit(word[i])) i++;
            if (i == n) break;
            for (string num; i <= n; i++) {
                if (i == n || !isdigit(word[i])) {
                    int k = 0;
                    while (k < num.size() && num[k] == '0') k++;
                    if (k < num.size())
                        nums.insert(num.substr(k));
                    else
                        nums.insert("0");
                    break;
                }
                else {
                    num += word[i];
                }
            }
        }
        return nums.size();
                        
    }
};