class Solution {
public:
    string getHint(string secret, string guess) {
        int n = guess.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++) {
            m[secret[i]]++; 
        }
        int b = 0;
        int c = 0;
        for(int i=0;i<n;i++) {
            if(secret[i] == guess[i]) {
                b++;
            }
        }
        for(int i=0;i<n;i++) {
            if(m.find(guess[i])!=m.end()) {
                c++;
                m[guess[i]]--;
                if(m[guess[i]] == 0) {
                    m.erase(guess[i]);
                } 
            }
        }
        c -= b;
        string res;
        res = to_string(b)+"A"+to_string(c)+"B";
        return res;
    }
};
