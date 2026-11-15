class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;
        int len = numbers.size();
        for(int i=0;i<len;i++){
            if(mp.find(numbers[i]) != mp.end()){
                int idx1 = mp[numbers[i]];
                int idx2 = i+1;
                ans.insert(ans.end(), {idx1, idx2});
            }
            else{
                mp.insert({(target - numbers[i]), i+1});
            }
        }
        return ans;
    }
};































// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         unordered_map<int, int> mp;
//         vector<int> ans;
//         int len = numbers.size();
//         for(int i=0;i<len;i++){
//             if(mp.find(numbers[i]) != mp.end()){
//                 int t = numbers[i];
//                 int idx1 = mp[t];
//                 int idx2 = i+1;
//                 ans.push_back(idx1);
//                 ans.push_back(idx2);
//                 return ans;
//             }
//             else {
//                 int diff = target - numbers[i];
//                 mp.insert({diff, i+1});
//             }
//         }
//         return ans;
//     }
// };







