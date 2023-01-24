class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        int prod=1;
        for(int i=0;i<nums.size();i++){
            prod=nums[i]*nums[i];
            v.push_back(prod);
        }
        sort(v.begin(),v.end());
        return v;
    }
};