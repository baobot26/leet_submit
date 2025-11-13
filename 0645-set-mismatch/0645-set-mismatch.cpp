class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> sets;
        int n = nums.size();
        for (auto num : nums) {
            sets[num]++; 
        }
        int twice = -1;
        int dupli = - 1;
        for (int i = 1; i <= n; ++i) {
            if (sets[i] == 2) {
                twice = i;
            }
            if (sets[i] == 0) {
                dupli = i;
            }
        }
        return {twice, dupli};
    }
};