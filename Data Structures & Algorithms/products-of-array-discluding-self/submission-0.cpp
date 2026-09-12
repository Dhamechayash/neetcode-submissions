class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // 2 zero case
        vector<int> v(nums.size(), 0);
        vector<int> ans;
        int zeroCnt = 0;
        int prod = 1;
        for(int i: nums){
            if(i == 0) {
                zeroCnt++;
            } else{
                prod = prod * i;
            }
        }
        if(zeroCnt > 1){
            return v;
        }
        if(zeroCnt == 1){
            for(int i: nums){
                if (i == 0){
                    ans.push_back(prod);
                }
                else{
                    ans.push_back(0);
                }
            }
            return ans;
        }
        for(int i: nums){
            if(i == 0){
                ans.push_back(prod);
            }
            else{
            ans.push_back(prod/i);
            }
        }
        return ans;

    }
};
