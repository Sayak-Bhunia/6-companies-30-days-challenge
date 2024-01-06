class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int r = img.size();
        int c = img[0].size();
        vector<vector<int>> res(r,vector<int>(c,0));

        for(int i=0;i<r;i++) {
            for(int j=0;j<c;j++) {
                int sum = 0;
                int count = 0;
                for(int x=max(0,i-1);x<min(r,i+2);x++) {
                    for(int y=max(0,j-1);y<min(c,j+2);y++) {
                        sum += img[x][y];
                        count += 1;
                    }
                }
                res[i][j] = sum/count;
            }
        }
        return res;
    }
};
