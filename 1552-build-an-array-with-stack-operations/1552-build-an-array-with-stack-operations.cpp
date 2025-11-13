class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> op;
        int i = 1;
        for (auto num : target) {
            if (i == num) {
                op.push_back("Push");
                ++i;
            }
            else {
                while (i != num) {
                    op.push_back("Push");
                    op.push_back("Pop");
                    ++i;
                }
                if (i == num) {
                op.push_back("Push");
                ++i;
                }
            }
        }
        return op;
    }
};