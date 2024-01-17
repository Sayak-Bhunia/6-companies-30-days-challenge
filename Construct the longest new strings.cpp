class Solution {
public:
    int longestString(int x, int y, int z) {
        int res = 2*min(x,y) + z;
        return x == y? 2*res:2*(res+1);
    }
};
