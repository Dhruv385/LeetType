class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<queries.size();i++){
            int cnt=0;
            for(int j=0;j<nums.size();j++){
                if(queries[i]>=nums[j]){
                    queries[i]-=nums[j];
                    cnt++;
                }
                else
                    break;
            }
            res.push_back(cnt);
        }
        return res;
    }
};