class Solution {
public:
    int findPairs(vector<int>& a, int k) {
        unordered_map<int,int> mp;
        for(int i:a) {  //stpring the freq of all the elements
            mp[i]++;    //mp.first = val, mp.second = freq
        }

        int res = 0;

        for(auto it:mp) {
            if(k == 0) {  //if k=0 the then cheking if the freq>1 or not
                if(it.second>1) res++;
            }
            else if(mp.find(it.first+k)!=mp.end()) res++;  //finding the element+k in
        }                                                  //the map
        return res;
    }
};
