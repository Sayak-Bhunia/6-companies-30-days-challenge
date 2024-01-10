class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string,int> mp;
        if(s.size()<10) return {};
        string str;
        for(int i=0;i<10;i++) {
            str += s[i];
        }
        mp[str]++;
        for(int i=10;i<s.size();i++) {
            str.erase(str.begin());
            str.push_back(s[i]);
            mp[str]++;
        }
        vector<string>res;
        for(auto it:mp) {
            if(it.second>1) res.push_back(it.first);
        }
        return res;
    }
};
