class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            int j = i+1;
            int k= nums.size()-1;
            while(j<k){
                int sum =nums[i]+nums[j]+nums[k];
                if(sum==0){
                    st.insert({nums[i], nums[j], nums[k]});
                    j+=1;
                    k-=1;
                }
                else if(sum>0){
                    k=k-1;
                }else{
                    j=j+1;
                }
            }
        }
        for(auto it: st){
            ans.push_back(it);
        }
        return ans;

    }
};