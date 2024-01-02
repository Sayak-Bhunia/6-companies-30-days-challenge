class Solution {
public:
    
    void solve(vector<vector<int>> & ans, vector<int> & p, int st, int k, int n, int sum, int arr[]) {
        if(k == 0) {
            if(sum == n) {
                sort(p.begin(),p.end());
                ans.push_back(p);
            }
            return;
        }
        else {
            for(int i=st;i<9;i++) {
                sum += arr[i];
                p.push_back(arr[i]);
                solve(ans, p, i+1, k-1, n, sum, arr);
                sum -= arr[i];
                p.pop_back();
            }
        }
        return;
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        int arr[9] = {1,2,3,4,5,6,7,8,9};
        vector<int> p;
        int st = 0;
        int sum = 0;
        solve(ans, p, st, k, n, sum, arr);
        return ans;
    }
};
