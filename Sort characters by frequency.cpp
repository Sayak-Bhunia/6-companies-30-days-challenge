class Solution {
public:
    string frequencySort(string s) {
        string res = "";
        map<char,int> mp;
        priority_queue<pair<int,char>> pq;
        for(int i=0;i<s.length();i++) {
            mp[s[i]]++;
        }

        for(auto it:mp) {
            pq.push({it.second,it.first});
        }

        while(!pq.empty()) {
            auto it = pq.top();
            while(it.first--) {
                res += it.second;
            }
            pq.pop();
        }

        return res;
    }
};
