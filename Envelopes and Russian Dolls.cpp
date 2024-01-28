class Solution {
public:
    
    static bool comp(vector<int> &a,vector<int> &b) {
        if(a[0] == b[0]) return a[1]>b[1];
        return a[0]<b[0];
    }

    int dpandBinarySearch(int n,vector<vector<int>> &a) {
        sort(a.begin(),a.end(),comp);
        if(n == 0) return 0;
        vector<int>res;
        res.push_back(a[0][1]);

        for(int i=1;i<n;i++) {
            if(a[i][1]>res.back()) {
                res.push_back(a[i][1]);
            }
            else {
                int ind = lower_bound(res.begin(),res.end(),a[i][1]) - res.begin();
                res[ind] = a[i][1];
            }
        }
        return res.size();
    }

    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int n = envelopes.size();
        return dpandBinarySearch(n,envelopes);
    }
}; 
