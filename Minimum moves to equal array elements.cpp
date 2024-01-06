class Solution {
public:
    int minMoves2(vector<int>& a) {
        sort(a.begin(),a.end());
        int x = a[a.size()/2];
        int res = 0;
        for(auto i:a) {
            res += abs(x-i);
        }
        return res;
    }
};
