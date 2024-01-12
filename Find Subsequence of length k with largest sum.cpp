class Solution {
public:
    vector<int> maxSubsequence(vector<int>& a, int k) {
        vector<int> res;
        priority_queue<pair<int,int>> maxHeap;
        for(int i=0;i<a.size();i++) {
            maxHeap.push({a[i],i});
        }

        map<int,int> mp;
        while(k--) {
            auto it = maxHeap.top();
            mp[it.second] = it.first;
            maxHeap.pop();
        }

        for(auto it:mp) {
            res.push_back(it.second);
        }
        
        return res;
    }
};
