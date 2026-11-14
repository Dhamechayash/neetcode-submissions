class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        dfs(nums, subset, 0, ans);
        return ans;
    }

private:
    void dfs(vector<int>& nums, vector<int>& subset, int i, vector<vector<int>>& ans){
        if(i>=nums.size()){
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        dfs(nums, subset, i+1, ans);
        subset.pop_back();
        dfs(nums, subset, i+1, ans);

    }
};