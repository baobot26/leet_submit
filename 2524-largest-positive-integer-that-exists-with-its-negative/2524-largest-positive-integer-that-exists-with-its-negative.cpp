class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int, int> map;
        int k = -1;
        for (int i = 0; i < nums.size(); ++i) {
            int temp = ~nums[i] + 1;
            if (map.count(temp)) {
                int tmp = (nums[i] ^ (nums[i] >> 31)) - (nums[i] >> 31);
                k = tmp > k ? tmp : k;
            }
            map[nums[i]] = 1;
        }
        return k;
    }
};