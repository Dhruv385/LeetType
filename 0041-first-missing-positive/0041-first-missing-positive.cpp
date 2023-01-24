class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        vector<int> a(nums.size()+1);
        int i;
        for(i=0;i<nums.size();i++){
            if(nums[i]>0 && nums[i]<=nums.size())
                a[nums[i]]++;
        }
        for(i=1;i<=nums.size();i++){
            if(a[i]==0)
                return i;
        }
        return nums.size()+1;
    }
};