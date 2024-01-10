class Solution {
public:
    void wiggleSort(vector<int>& a) {
        int n = a.size();
        vector<int>temp(n);
        temp = a;
        sort(temp.begin(),temp.end());
        int i = 1;
        int j = n - 1;
        while(i<n && j>=0) {
            a[i] = temp[j];
            j--;
            i += 2;
            if(i>=n) i = 0;
        }
    }
};
