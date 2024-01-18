class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        int maxi = 0;
        string res;
        for(int i=0;i<d.size();i++) {
            int k = 0;
            if(d[i].size()<maxi || (d[i].size() == maxi && d[i]>=res)) continue;
            for(int j=0;j<s.size() && k<d[i].size();j++) {
                if(d[i][k] == s[j]) k++;
            }
            if(k == maxi && k == d[i].size()) res = d[i];
            else if(k>maxi && k == d[i].size()) {
                maxi = k;
                res = d[i];
            }
        }
        return res;
    }
};
