class Solution {
public:
    int countPoints(string rings) {
        int r[10] = {}, g[10] = {}, b[10] = {};
        for (int i = 0; i + 1 < rings.size(); i++) {
            if (rings[i] == 'R')
                r[rings[i+1] - '0']++;
            if (rings[i] == 'G')
                g[rings[i+1] - '0']++;
            if (rings[i] == 'B')
                b[rings[i+1]-'0']++;
        }
        
        int count = 0;
        for (int i = 0; i < 10; i++)
            if (r[i] && g[i] && b[i])
                count++;
        return count;
        
    }
};