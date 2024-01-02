class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& time) {
        unordered_map<string,vector<int>>mp;
        for(int i=0;i<time.size();i++) {
            int t = stoi(time[i][1]);
            mp[time[i][0]].push_back(t);
        }
        for(auto & it:mp) {
            sort(it.second.begin(), it.second.end());
        }
        vector<string>ans;
        for(auto & it:mp) {
            vector<int>temp = it.second;
            for(int i=2;i<temp.size();i++) {
                if(temp[i]-temp[i-2]<100) {
                    ans.push_back(it.first);
                    break;
                }
            }
        }
        return ans;
    }
};
