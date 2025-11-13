class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        size_t n = nums.size();
        for(size_t i = 0; i < n; ++i) {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};