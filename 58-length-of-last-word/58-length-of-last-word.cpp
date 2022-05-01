class Solution {
 public:
  int lengthOfLastWord(string s) {
    for (int i = s.size() - 1; i >= 0; i--)
      if (isalpha(s[i]))
        for (int j = i; j >= -1; j--)
          if (j == -1 || !isalpha(s[j]))
            return i - j;
    return 0;
  }
};