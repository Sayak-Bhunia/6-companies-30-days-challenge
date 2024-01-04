class Solution {
public:
    int countDistinct(vector<int>& a, int k, int p) {
        set<vector<int>> s;
        for(int i=0;i<a.size();i++) {
            for(int j=i;j<a.size();j++) {
                vector<int> res;
                int c = 0;
                for(int l=i;l<=j;l++) {
                    res.push_back(a[l]);
                    if(a[l]%p == 0) {
                        c++;
                    }
                }
                if(c<=k) {
                    s.insert(res);
                }
            }
        }
        return s.size();
    }
};
