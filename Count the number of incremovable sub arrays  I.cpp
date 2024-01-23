class Solution {
public:
    int incremovableSubarrayCount(vector<int>& a) {
        int n = a.size();
        int i=0;
        for(;i<n-1;i++){
            if(a[i+1]<=a[i]) break;
        }
        int j=n-1;
        for(;j>0;j--){
            if(a[j-1]>=a[j]) break;
        }
        int c=0;
        while(i>=0){
            int u = upper_bound(a.begin()+j, a.end(), a[i])-a.begin();
            c += n-u+1;
            i--;
        }
        if(c<(n*(n+1))/2){
            c += n-j+1;
        }
        return c;
    }
};
