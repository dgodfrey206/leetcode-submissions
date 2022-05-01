class Solution {
 public:
  int lengthOfLastWord(string s) {
    int n = s.size();
    for (int i = n - 1; i >= 0; i--)
      if (isalpha(s[i]))
        for (int j = i; j >= -1; j--)
          if (j == -1 || !isalpha(s[j]))
            return i - j;
    return 0;
  }
};