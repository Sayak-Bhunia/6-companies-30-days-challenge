class Solution {
public:
    int numberOfSubarrays(vector<int>& a, int k) {
        unordered_map<int,int> mp;
        int n = a.size();
        int r = 0;
        int l = 0;
        mp[0] = 1;
        for(int i=0;i<n;i++) {
            r += a[i]%2;
            l += mp[r-k];
            mp[r]++;
        }
        return l;
    }
};
