class Solution {
public:

    struct compare {
        bool operator()(pair<int,string> &a, pair<int,string> &b) {
            if(a.first<b.first) return true;
            else if(a.first == b.first && a.second>b.second) return true;
            return false;
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(auto it:words) mp[it]++;
        priority_queue<pair<int,string>, vector<pair<int,string>>, compare> pq;
        for(auto it:mp) pq.push({it.second,it.first});
        vector<string> res;
        while(k--) {
            auto it = pq.top();
            res.push_back(it.second);
            pq.pop();
        }
        return res;
    }
};
