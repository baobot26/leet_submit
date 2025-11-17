class Solution {
    public int findMaxK(int[] nums) {
        Map<Integer, Integer> m = new HashMap<>();
        int k = -1;
        for (int i = 0; i < nums.length; ++i) {
            if (m.containsKey(~nums[i] + 1)) {
                int temp = (nums[i] ^(nums[i] >> 31)) - (nums[i] >> 31);
                k = temp > k ? temp : k;
            }
            m.put(nums[i], 1);
        }
        return k;
    }
}