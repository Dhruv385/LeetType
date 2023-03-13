class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;
        for(auto i:nums){
            if(i%2==0)
                v1.push_back(i);
            else
                v2.push_back(i);
        }
        v1.insert(v1.end(),v2.begin(),v2.end());
        return v1;
    }
};