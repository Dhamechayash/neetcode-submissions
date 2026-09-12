class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        int len = strs.size();
        for(int i=0;i<len;i++){
            string word = strs[i];
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end());
            mp[sortedWord].push_back(word);
        }
        for(auto& i: mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
