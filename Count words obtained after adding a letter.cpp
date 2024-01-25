class Solution {
public:
    int wordCount(vector<string>& s, vector<string>& t) {
        unordered_set<string> st;
        for(auto it:s) {
            sort(it.begin(),it.end());
            st.insert(it);
        }
        int res = 0;
        for(int i=0;i<t.size();i++) {
            string ans = t[i];
            sort(ans.begin(),ans.end());
            int c = 0;
            for(int j=0;j<ans.size();j++) {
                string temp = ans.substr(0,j)+ans.substr(j+1);
                if(st.find(temp)!=st.end()) {
                    c = 1;
                    break;
                }
            }
            if(c == 1) res++;
        }
        return res;
    }
};
