class Solution {
public:
    bool check(vector<int>& nums) {
        int minIdx = nums.size()-1;
        for (int i = nums.size()-1; i >= 0; i--)
            if (nums[i] <= nums[minIdx])
                minIdx = i;
            else
                break;
        int prev = -1;
        for (int i = 0; i < nums.size(); i++, minIdx++) {
            if (prev != -1 && nums[minIdx % nums.size()] < prev)
                return false;
            prev = nums[minIdx % nums.size()];
        }
        return true;
    }
};