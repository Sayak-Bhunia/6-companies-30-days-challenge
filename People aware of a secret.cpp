class Solution {
    int c = 1e9 + 7;
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<long long> dp(n+1,0);
        long long num = 0;
        dp[1] = 1;

        for(int i = 2; i <= n; i++){
            long long a = dp[max(0,i-delay)];
            long long b = dp[max(0,i-forget)];

            num = (num + a - b+c)%c;
            dp[i] = num%c;

        }   

        long long ans = 0;   
        for(int i = n - forget + 1; i <= n; i++){
            ans = (ans + dp[i])%c;
        }
        return ans%c;
    }
};
