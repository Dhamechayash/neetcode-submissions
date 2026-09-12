class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> mp = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        stack<char> c;

        for (auto i : s) {
            if (i == '(' || i == '[' || i == '{') {
                c.push(i);
            }
            else {
                if (c.empty() || mp[i] != c.top()) {
                    return false;
                }

                c.pop();
            }
        }

        return c.empty();
    }
};