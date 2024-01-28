class Solution {  //using just vector stl basically it converts the vector convetinally into a minHeap
public:
    int maximumProduct(vector<int>& a, int k) {
        const int mod = 1e9+7;
        long long res = 1;
        sort(a.begin(),a.end());
        while(k!=0) {
            pop_heap(a.begin(), a.end(), greater<int>());
            a.back()++;
            push_heap(a.begin(), a.end(), greater<int>());
            k--;
        }
        for(auto it:a) {
            res *= it;
            res %= mod;
        }
        return res;
    }
};
