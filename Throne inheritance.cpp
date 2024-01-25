class ThroneInheritance {
public:
    unordered_map<string, vector<string>> mp;
    unordered_set<string> d;
    string king;
    ThroneInheritance(string kingName) {
        king = kingName;
    }
    
    void birth(string parentName, string childName) {
        mp[parentName].push_back(childName);
    }
    
    void death(string name) {
        d.insert(name);
    }
    
    void helper(string parentName, vector<string> &res) {
        if(d.count(parentName) == 0) res.push_back(parentName);
        for(auto it:mp[parentName]) {
            helper(it,res);
        }
    }

    vector<string> getInheritanceOrder() {
        vector<string> res;
        helper(king,res);
        return res;
    }
};

/**
 * Your ThroneInheritance object will be instantiated and called as such:
 * ThroneInheritance* obj = new ThroneInheritance(kingName);
 * obj->birth(parentName,childName);
 * obj->death(name);
 * vector<string> param_3 = obj->getInheritanceOrder();
 */
