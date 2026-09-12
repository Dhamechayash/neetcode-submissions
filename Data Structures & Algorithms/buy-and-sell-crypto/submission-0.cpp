class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int minNumber = INT_MAX;
        int maxNumber = INT_MIN;
        int len = prices.size();
        for(int i=0;i<len;i++){
            minNumber = min(minNumber, prices[i]);
            ans = max(ans, prices[i]-minNumber);
        }
        return ans;
    }
};
