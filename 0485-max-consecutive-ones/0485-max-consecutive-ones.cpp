class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int temp = 0;
        for(auto num : nums) {
            if(num == 1){
                temp++;
            }
            else {
                max = max > temp ? max : temp;
                temp = 0;
            }
        }
        max = max > temp ? max : temp;
        return max;
    }
};