class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int, int> set;
        for (auto& num : nums) {
            if (set.count(num)) {
                set[num]++;
            }
            else set.insert(pair{num, 1});
        }
        int current = 0;
        for (auto& item : set) {
            int freq = item.second;
            item.second = current;
            current += freq;
        }
        vector<int> res;
        for (auto& num : nums) {
            if (set.count(num)) {
                res.push_back(static_cast<int>(set[num]));
            }
        }
        return res;
    }
};