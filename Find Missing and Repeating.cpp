vector<int> findTwoElement(vector<int> v, int n) {
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) {
            mp[v[i]]++;
        }
        vector<int> res;
        for(int i=1;i<=n;i++) {
            if(mp[i] == 2) {
                res.push_back(i);
                break;
            }
        }
        for(int i=1;i<=n;i++) {
            if(mp[i] == 0) {
                res.push_back(i);
                break;
            }
        }
        return res;
    }
