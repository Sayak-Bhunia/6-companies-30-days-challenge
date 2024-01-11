class Solution {
public:
    int maxRotateFunction(vector<int>& a) {
        int prev = 0;
        int sum = 0;
        int n = a.size();
        for(int i=0;i<n;i++) {
            prev += (i*a[i]);
            sum += a[i];
        }
        int res = prev;
        for(int i=n-1;i>0;i--) {
            prev = prev - (n-1)*a[i]+sum-a[i];
            res = max(res,prev);
        }
        return res;
    }
};
