class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int m=0,diff=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i<j && nums[j]>nums[i]){
                    diff=nums[j]-nums[i];
                    m=max(m,diff);
                }
            }
        }
        if(m==0)
            return -1;
        return m;
    }
};