class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& a, vector<vector<int>>& b) {
        vector<int> res;
        int n = a.size();
        int m = a[0].size();
        
        for(auto& v:b){
            priority_queue<pair<string,int>,vector<pair<string,int>>,greater<pair<string,int>>> pq;
            for(int i=0;i<n;i++){
                pq.push({a[i].substr(m-v[1]),i});
            }
            int k=v[0];
            while(k>1){
                pq.pop();
                k--;
            }
            res.push_back(pq.top().second);
        }
        return res;
    }
};
