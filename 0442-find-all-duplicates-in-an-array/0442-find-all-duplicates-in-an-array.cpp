class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;){
            if(nums[i]==nums[i+1]){
                v.push_back(nums[i]);
                i++;
            }
            else
                i++;
        }
        return v;
    }
};