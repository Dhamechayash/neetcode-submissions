class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int downOne = 0;
        int downTwo = 0;
        for(int i=2;i<=cost.size();i++){
            int temp = downOne;
            downOne = min(cost[i-1]+downOne, cost[i-2]+downTwo);
            downTwo = temp;
        }
        return downOne;
    }
};