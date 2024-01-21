class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        vector<int> result;

    for (int i = 0; i <= s.length() - a.length(); ++i) {
        if (s.substr(i, a.length()) == a) {
            for (int j = 0; j <= s.length() - b.length(); ++j) {
                if (s.substr(j, b.length()) == b && abs(i - j) <= k) {
                    result.push_back(i);
                    break;
                }
            }
        }
    }
        sort(result.begin(),result.end());

    return result;
    }
};
