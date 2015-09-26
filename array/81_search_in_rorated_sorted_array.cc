class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size()-1;
        while (i <= j){
            int c = (i + j)/2;
            if (nums[c] == target){
                return true;
            } else if (nums[i] < nums[c]){
                if ((nums[i] <= target) && (nums[c] > target)){
                    j = c - 1;
                } else {
                    i = c + 1;
                }
            } else if (nums[i] > nums[c]){
                if ((nums[j] >= target) && (nums[c] < target)){
                    i = c + 1;
                } else {
                    j = c - 1;
                }
            } else {
                i++;
            }
        }
        return false;
    }
};