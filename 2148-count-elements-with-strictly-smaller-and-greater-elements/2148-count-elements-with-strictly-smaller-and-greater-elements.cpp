class Solution {
public:
    int countElements(vector<int>& nums) {
        int cnt=0;
        if(nums.size()<3)
            return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[0] && nums[i]<nums[nums.size()-1])
                    cnt++;
        }
        return cnt;
    }
};