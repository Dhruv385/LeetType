class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int pos,a=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                pos=i;
                if(pos-a<=k && a!=-1)
                    return false;
                a=pos;
            }
        }
        return true;
    }
};