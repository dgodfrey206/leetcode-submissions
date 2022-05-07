class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if (ops.size() == 0)
            return m * n;
        auto min = ops[0];
        int count = min[0] * min[1];
        for (int i = 1; i < ops.size(); i++) {
            if (ops[i][0] < min[0]) {
                count -= (min[0] - ops[i][0]) * min[1];
                min[0] = ops[i][0];
            }
            if (ops[i][1] < min[1]) {
                count -= (min[1] - ops[i][1]) * min[0];
                min[1] = ops[i][1];
            }
        }
        return count;
    }
};