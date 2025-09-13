#include <cmath>
class Solution {
public:
    int findDistance(int x, int y) {
        return abs(x - y);
    }
    int findClosest(int x, int y, int z) {
        if(findDistance(x, z) < findDistance(y, z)) return 1;
        if(findDistance(x, z) > findDistance(y, z)) return 2;
        return 0;
    }
};