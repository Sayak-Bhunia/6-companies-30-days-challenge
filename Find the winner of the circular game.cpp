class Solution {
public:
    int solve(int n,int k) {
        int res = 0;
        for(int i=1;i<=n;i++) {
            res = (res+k)%i;
        }
        return res;
    }

    int findTheWinner(int n, int k) {
        return solve(n,k)+1;
    }
};
