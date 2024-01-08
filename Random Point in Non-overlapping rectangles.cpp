class Solution {
public:
    vector<int>area;
    vector<vector<int>>rec;
    Solution(vector<vector<int>>& rects) {
        rec = rects;
        int sum = 0;
        for(auto it:rec) {
            int ar = (abs(it[2]-it[0]+1)*abs(it[3]-it[1]+1));
            sum += ar;
            area.push_back(sum);
        }
    }
    
    vector<int> pick() {
        int c = area.back();
        int rnd = rand()%c;
        int ind = upper_bound(area.begin(),area.end(),rnd)-area.begin();
        vector<int>r = rec[ind];
        int x = rand()%(abs(r[2] - r[0] + 1)) + r[0];
        int y = rand()%(abs(r[3] - r[1] + 1)) + r[1];
        return {x,y};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(rects);
 * vector<int> param_1 = obj->pick();
 */
