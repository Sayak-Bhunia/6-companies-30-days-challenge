class Solution {
public:
    int stoneGameVI(vector<int>& av, vector<int>& bv) {
        int a = 0;
        int b = 0;
        vector<pair<int,int>> res;
        for(int i=0;i<av.size();i++) res.push_back({av[i]+bv[i],i});
        sort(res.rbegin(),res.rend());
        for(int i=0;i<av.size();i++) {
            int ind = res[i].second;   //example dkhe ja obsvervation elo
            if(i%2 == 1) b += bv[ind]; //r bob tai sob somoy odd turn e thkbe
            else a += av[ind]; //alice suru korbe khela tai o sob somy evem ei thkbe
        }
        if(a>b) return 1;
        else if(a<b) return -1;
        else return 0;
    }
};
