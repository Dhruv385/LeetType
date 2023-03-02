class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> v;
        for(int i=1;i<=n;i++){
            if(!binary_search(nums.begin(),nums.end(),i))
                v.push_back(i);
        }
        return v;
    }
};