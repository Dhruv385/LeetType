class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int c=0;
        if(nums.size()==1 || nums.size()==2)
            return true;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1])
                c++;
            if(i>=2 && nums[i-2]>=nums[i])
                nums[i]=nums[i-1];
            if(c>1)
                return false;
        }
        return true;
    }
};