class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;
        int len = nums.size();
        for(int i=0; i<len; i++){
            int diff = target - nums[i];
            if(mp.find(diff) != mp.end()){
                ans.push_back(mp[diff]);
                ans.push_back(i);
                return ans;
            }
            mp.insert({nums[i], i});
        }
        return ans;
    }
};
