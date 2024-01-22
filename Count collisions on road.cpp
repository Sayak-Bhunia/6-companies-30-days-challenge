class Solution {
public:
    int countCollisions(string d) {
        vector<pair<char,int>> a;
        for(int i=0;i<d.length();i++) {
            int c = 1; // otherwise aa will count as 1
            while(i+1<d.length() && d[i] == d[i+1]) { //consecutive found
                i++;
                c++;
            }
            a.push_back({d[i],c});
        }
        int res = 0;

        for(int i=0;i<a.size()-1;i++) {
            if(a[i].first == 'R' && a[i+1].first == 'L') {
                 res += a[i].second + a[i+1].second;
            }
            else if(a[i].first == 'R' && a[i+1].first == 'S') {
                res += a[i].second;
            }
            else if(a[i].first == 'S' && a[i+1].first == 'L') {
                res += a[i+1].second;
            }
        }
        return res;
    }
};
