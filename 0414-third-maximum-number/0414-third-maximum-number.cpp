class Solution {
public:
    int thirdMax(vector<int>& nums) {
        priority_queue<int> pq;
        for (auto num : nums) pq.push(num);
        int r1 = pq.top();
        while (pq.top() == r1 && !pq.empty()) {
            pq.pop();
        }
        int r2 = pq.top();
        while (pq.top() == r2 && !pq.empty()) {
            pq.pop();
        }
        if (pq.empty()) return r1;
        return pq.top();
    }
};