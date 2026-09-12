class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int minP = INT_MAX;
        int len = prices.size();
        for(int i=0;i<len;i++){
            minP = min(prices[i], minP);
            ans = max(ans, prices[i] - minP);
        }
        return ans;
    }
};
