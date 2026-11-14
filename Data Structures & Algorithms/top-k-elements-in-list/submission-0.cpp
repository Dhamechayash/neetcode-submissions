class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> ans;
        int len = nums.size();
        for(int i=0;i<len;i++){
            mp[nums[i]]++;
        }
        vector<pair<int, int>> p;
        for(auto i: mp){
            p.push_back({i.second, i.first});
        }
        sort(p.rbegin(), p.rend());
        for(int j=0;j<k;j++){
            ans.push_back(p[j].second);
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int, int> mp;
//         vector<int> ans;
//         int len = nums.size();
//         for(int i: nums){
//             mp[i]++;
//         }
//         // {1, 1, 2, 2, 3, 3}
//         vector<pair<int, int>> p;
//         for(auto i: mp){
//             p.push_back({i.second, i.first});
//         }
//         sort(p.rbegin(), p.rend());
//         for(int j = 0; j<k; j++){
//             ans.push_back(p[j].second);
//         }
//         return ans;
//     }
// };
