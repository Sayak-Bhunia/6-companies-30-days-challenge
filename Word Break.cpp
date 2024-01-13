class Solution {   //Memoization code
public:            //top down approch from rec
    int dp[301];
    int help(int i, string s, set<string> &wordDict) {
        if(i == s.size()) return 1;
        string res="";
        if(dp[i]!=-1) return dp[i];
        for(int j=i;j<s.size();j++) {
            res += s[j];
            if(wordDict.find(res)!=wordDict.end()) {
                if(help(j+1,s,wordDict)) return 1;
            }
        }
        return dp[i]=0;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> st;
        memset(dp,-1,sizeof dp);
        for(auto it:wordDict) st.insert(it);
        return help(0,s,st);
    }
};
