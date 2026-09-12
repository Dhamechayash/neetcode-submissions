class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "";
        for(char c: s){
            if(isalnum(c)){
                s1 += tolower(c);
            }
        }
        string s2 = string(s1.rbegin(), s1.rend());
        return s1 == s2;
    }
};
