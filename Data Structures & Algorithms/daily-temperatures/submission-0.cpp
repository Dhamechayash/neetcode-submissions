class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> st;
        int len = temperatures.size();
        vector<int> result(len);
        for(int i=0;i<len;i++){
            int currTemp = temperatures[i];
            while(!st.empty() && st.top().second < currTemp){
                int prevInd = st.top().first;
                int prevTemp = st.top().second;
                st.pop();
                result[prevInd] = i-prevInd;
            }
            st.push({i, currTemp}); 
            // 0, 30
        }
        return result;

    }
};
