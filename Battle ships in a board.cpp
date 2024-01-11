class Solution {
public:
    int countBattleships(vector<vector<char>>& a) {
        int res = 0;
        for(int i=0;i<a.size();i++) {
            for(int j=0;j<a[i].size();j++) {
                if(a[i][j] == 'X') {
                    if((i-1>=0 && a[i-1][j] == 'X') || (j-1>=0 && a[i][j-1] == 'X')) {
                    }
                    else res++;
                }
            }
        }
        return res;
    }
};
