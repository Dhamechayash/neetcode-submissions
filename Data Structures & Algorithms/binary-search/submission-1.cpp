class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int len = nums.size();
        int r = len-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid] == target) return mid;
            else if(target > nums[mid]){
                l++;
            }
            else{
                r--;
            }
        }
        return -1;
    }
};
