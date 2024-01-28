class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& a) {
        sort(a.begin(),a.end());  //choto gulo k age niye nilam
        for(int i=0;i<a.size();i++) {
            if(mass>=a[i]) mass += a[i];  //choto gulo k jog kore nilam
            else {
                return false;  //aktao jodi boro peye jai tahle false
                break;
            }
        }
        return true;
    }
};
