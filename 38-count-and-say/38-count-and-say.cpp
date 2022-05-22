class Solution {
public:
    string countAndSay(int n) {
        if (n == 1)
            return "1";
        string sayLess = countAndSay(n-1);
        int count = 1;
        string res;
        for (int i = 1; i <= sayLess.size(); i++) {
            if (i == sayLess.size() || sayLess[i] != sayLess[i-1]) {
                res += to_string(count) + sayLess[i-1];
                count = 1;
            } else {
                count++;
            }
        }
        return res;
    }
};