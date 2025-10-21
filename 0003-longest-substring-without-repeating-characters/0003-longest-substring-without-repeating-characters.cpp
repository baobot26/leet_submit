class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;
        int length = 0;
        int left = 0;
        for (int right = 0; right < s.size(); ++right) {
            string tmp = s.substr(left, right - left);
            if(tmp.find(s[right]) != string::npos) {
                left = left + tmp.find(s[right]) + 1;
            }
            length = max(length, right - left + 1);
        }
        return length;
    }
};