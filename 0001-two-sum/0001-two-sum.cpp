class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indexes;
        for(int i = 0; i < nums.size(); ++i) {
            int current = nums[i];
            int complement = target - current;
            if(indexes.count(complement)) return {indexes[complement], i};
            indexes[current] = i;
        }
        return {};
    }
};