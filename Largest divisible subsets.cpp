class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& a) {
        int n = a.size();
        vector<int> dp(n,1), hash(n);
        int maxi = 1;
        int lastInd = 0;
        sort(a.begin(),a.end());
        for(int curr=0;curr<n;curr++) {
            hash[curr] = curr;
            for(int prev=0;prev<curr;prev++) {
                if(a[curr]%a[prev] == 0 && 1+dp[prev]>dp[curr]) {
                    dp[curr] = 1 + dp[prev];
                    hash[curr] = prev;
                }
            }
            if(dp[curr]>maxi) {
                maxi = dp[curr];
                lastInd = curr;
            }
        }
        vector<int> res;
        res.push_back(a[lastInd]);
        while(hash[lastInd]!=lastInd) {
            lastInd = hash[lastInd];
            res.push_back(a[lastInd]);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
