class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        for (int i = 0, p = 1; i < sentence.size(); ) {
            if (isalpha(sentence[i])) {
                string temp;
                for (int j = i; j < sentence.size() && isalpha(sentence[j]); j++) {
                    temp += sentence[j];
                } 
                int j = 0;
                while (j < searchWord.size() && j < temp.size() && searchWord[j] == temp[j]){
                    j++; 
                } 
                if (j == searchWord.size())
                    return p;
                i += temp.size();
                p++;
            } else {
                i++;
            }
        }
        return -1;
    }
};