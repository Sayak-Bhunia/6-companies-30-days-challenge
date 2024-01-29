class Solution { //using optimised Z algo
public:

    vector<int> z_function(string s) {
        int n = s.size();  //optimised Z algo
        vector<int> z(n);
        int l = 0, r = 0;
        for(int i=1;i<n;i++) {
            if(i<r) {
                z[i] = min(r-i,z[i-l]);
            }
            while(i+z[i]<n && s[z[i]] == s[i+z[i]]) {
                z[i]++;
            }
            if(i+z[i]>r) {
                l = i;
                r = i + z[i];
            }
        }
        return z;
    }

    long long sumScores(string s) {
        vector<int> ans = z_function(s);
        long long res = s.size();  //qs e criteira te size tao add korte boleche tai
        for(int i=1;i<s.size();i++) { //i=1 theke start korechi karon according to
            res += ans[i];            //Z algo z[0] = 0 so... its the same
        }
        return res;
    }
};
