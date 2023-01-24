class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i,j;
        int prod=1,cnt=0;
        for(i=0,j=0;j<nums.size();j++){
            prod*=nums[j];
            while(prod>=k && i<nums.size()){
                prod/=nums[i];
                i++;
            }
            if(prod<k)
                cnt+=(j-i+1);
        }
        if(prod>=k)
            return 0;
        else
            return cnt;
    }
};