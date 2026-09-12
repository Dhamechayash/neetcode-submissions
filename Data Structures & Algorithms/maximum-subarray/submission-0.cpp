class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxAns = INT_MIN;
        // 4 3 -1
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            ans += nums[i];
            maxAns = max(ans, maxAns);
            if(ans < 0) ans = 0;
        }
        return maxAns;
    }
};
