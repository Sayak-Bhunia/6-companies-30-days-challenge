class Solution {
public:

    int dp[3005][1005];
    long long mod = 1e9 + 7;
    int dfs(int start, int end, int k)
    {
        if(k == 0)
        {
            if(start == end) return 1;
            else return 0;
        }

        if(dp[start+1000][k]!=-1) return dp[start+1000][k];
        long long w = 0;
        w = (w%mod+dfs(start-1, end, k-1)%mod)%mod;
        w = (w%mod+dfs(start+1, end, k-1)%mod)%mod;
        return dp[start+1000][k] = w;
    }
 
    int numberOfWays(int startPos, int endPos, int k) {
        memset(dp, -1, sizeof(dp));
        return dfs(startPos, endPos, k);
    }
};
