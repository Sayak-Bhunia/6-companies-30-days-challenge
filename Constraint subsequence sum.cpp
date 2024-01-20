class Solution {
public:
    int constrainedSubsetSum(vector<int>& a, int k) {
        int n = a.size();
        vector<int> b = a;
        int res = a[0];
        priority_queue<pair<int,int>> pq;
        pq.push({b[0],0});
        for(int i=1;i<n;i++) {
            while(!pq.empty() && pq.top().second<i-k) {
                pq.pop();
            }
            b[i] = max(b[i],a[i]+pq.top().first);
            pq.push({b[i],i});
            res = max(res,b[i]);
        }
        return res;
    }
};
