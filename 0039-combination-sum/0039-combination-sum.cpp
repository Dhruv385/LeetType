class Solution {
public:
    void sum(vector<vector<int>> &v,vector<int> &a,vector<int>& candidates,int c,int s){
        if(c==candidates.size()){
            if(s==0)
                v.push_back(a);
            return;
        }
        if(candidates[c]<=s){
            a.push_back(candidates[c]);
            sum(v,a,candidates,c,s-candidates[c]);
            a.pop_back();
        }
        sum(v,a,candidates,c+1,s);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        vector<int> a;
        sum(v,a,candidates,0,target);
        return v;
    }
};