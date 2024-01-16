class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> res;
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        
        for(int i=0;i<rows;i++) {
            for(int j=0;j<cols;j++) {
                pq.push({abs(i-rCenter)+abs(j-cCenter),{i,j}});
            }
        }

        while(!pq.empty()) {
            auto it = pq.top();
            vector<int> v;
            v.push_back(it.second.first);
            v.push_back(it.second.second);
            res.push_back(v);
            pq.pop();
        }
        return res;
    }
};
