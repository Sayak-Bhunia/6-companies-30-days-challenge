class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int c = 0;
        sort(arr2.begin(),arr2.end()); //sudhu eta sort korlei hobe sudhu etei Binary Search korchi
        for(int i=0;i<arr1.size();i++) {
            int l = 0;
            int h = arr2.size() - 1;
            while(l<=h) {
                int m = (l+h)/2;
                if(abs(arr1[i] - arr2[m])<=d) {
                    c++;
                    break;
                }
                else if(arr2[m]>arr1[i]+d) h = m - 1;
                else l = m + 1;
            }
        }
        return arr1.size() - c;
    }
};
