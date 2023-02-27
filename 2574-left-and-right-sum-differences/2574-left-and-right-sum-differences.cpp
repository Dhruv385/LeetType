class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> a;
        vector<int> l(nums.size(),0);
        vector<int> r(nums.size(),0);
        int sum=0;
        for(int i=1;i<nums.size();i++){
            sum+=nums[i-1];
            l[i]=sum;
        }
        sum=0;
        for(int i=nums.size()-2;i>=0;i--){
            sum+=nums[i+1];
            r[i]=sum;
        }
        for(int i=0;i<nums.size();i++)
            a.push_back(abs(l[i]-r[i]));
        return a;
    }
};