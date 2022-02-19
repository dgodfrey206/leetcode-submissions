class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
int m = INT_MIN;

if (nums.size() < 2)
  return 0;

for (int i = 1; i < nums.size(); i++) {
  m = max(m, (nums[i] - nums[i - 1]));
}
return m;
    }
};