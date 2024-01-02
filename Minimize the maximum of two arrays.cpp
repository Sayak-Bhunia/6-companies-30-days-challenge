class Solution {
public:

    long long gcd(long long a,long long b) {
        return ((b==0)?a:(gcd(b, a%b)));
    }

    int minimizeSet(int d1, int d2, int u1, int u2) {
        long long l = 1, h = (long long)(2*(1e9)+1);
        long long ans = h;
        unsigned long long lcm = (d1/gcd(d1,d2))*d2;
        while(l<=h) {
            long long m = (l+h)/2;
            long long a = m/d1 - m/lcm;
            long long b = m/d2 - m/lcm;
            long long ab = m/lcm;
            long long v = m - ab - ((a>u2)?(a-u2):0)-((b>u1)?(b-u1):0);
            if(v>=(u1+u2)) {
                ans = m;
                h = m - 1;
            }
            else l = m + 1;
        }
        return ans;
    }
};
