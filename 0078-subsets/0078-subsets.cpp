class Solution {
public:
    void set(vector<vector<int>> &v,vector<int> &a,int c,vector<int> nums){
        v.push_back(a);
        if(c==nums.size())
            return;
        for(int i=c;i<nums.size();i++){
            a.push_back(nums[i]);
            set(v,a,i+1,nums);
            a.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> a;
        set(v,a,0,nums);
        return v;
    }
};