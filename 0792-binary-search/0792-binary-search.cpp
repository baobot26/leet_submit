class Solution {
public:
int search(vector<int>& nums, int target) {
    auto it = lower_bound(nums.begin(), nums.end(), target);
    
    // Check if element was found and matches target
    if (it != nums.end() && *it == target) {
        return it - nums.begin();  // Convert iterator to index
    }
    return -1;  // Not found
}
};