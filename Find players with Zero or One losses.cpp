class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> mp;
        for(int i=0;i<matches.size();i++) {
            mp[matches[i][1]]++;
        }
        vector<int> lost0;
        vector<int> lost1;
        for(int i=0;i<matches.size();i++) {
            int win = matches[i][0];
            int loose = matches[i][1];
            if(mp.find(win) == mp.end()) {
                lost0.push_back(win);
                mp[win] = 2;
            }
            if(mp[loose] == 1) lost1.push_back(loose);
        }
        sort(lost0.begin(),lost0.end());
        sort(lost1.begin(),lost1.end());
        return {lost0,lost1};
    }
};
