class Solution {
public:
    int maximumProduct(vector<int>& a, int k) {
        const int mod = 1e9+7;
        long long res = 1;
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for(auto it:a) minHeap.push(it);
        while(k!=0) {
            int pq = minHeap.top();
            minHeap.pop();
            minHeap.push(pq+1);
            k--;
        }
        while(!minHeap.empty()) {
            int pq = minHeap.top();
            res *= pq;
            res %= mod;
            minHeap.pop();
        }
        return res;
    }
};
