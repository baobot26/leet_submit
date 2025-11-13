class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int, int> set;
        for (int num = 1; num <= nums.size(); ++num) {
            set.insert({num, 0});
        }
        for (auto num : nums) {
            if (set.count(num)) {
                set[num]++;
            }
        }
        vector<int> res;
        for (auto& item : set) {
            if(item.second == 0) res.push_back(item.first);
        }
        return res;
    }
};