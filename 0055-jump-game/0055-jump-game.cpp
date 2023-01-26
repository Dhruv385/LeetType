class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maximum=nums[0];
        for (int i=1;i<nums.size();i++) {
            if (i>maximum)
                return false;
            maximum=max(i+nums[i],maximum);
        }
        return true;
    }
};