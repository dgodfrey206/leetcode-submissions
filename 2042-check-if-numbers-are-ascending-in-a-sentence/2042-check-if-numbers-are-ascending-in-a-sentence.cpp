class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev = -1;
        string num;
        for (int i = 0; i < s.size();) {
            if (isdigit(s[i])) {
                while (i < s.size() && isdigit(s[i])) {
                    num += s[i++];
                }
                if (stoi(num) <= prev)
                    return false;
                prev = stoi(num);
                num.clear();
            } else {
                i++;
            }
        }
        return true;
    }
};