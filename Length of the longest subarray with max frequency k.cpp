class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int res = 0;
        for(int l=0,h=0;h<nums.size();h++) {
            mp[nums[h]]++;
            while(mp[nums[h]]>k) mp[nums[l++]]--;
            res = max(res,h-l+1);
        }
        return res;
    }
};
