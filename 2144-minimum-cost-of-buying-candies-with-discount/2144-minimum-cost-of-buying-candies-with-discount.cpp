class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int sum=0,t_sum=0;
        for(int i=cost.size()-3;i>=0;i-=3)
            sum+=cost[i];
        for(int i=0;i<cost.size();i++)
            t_sum+=cost[i];
        return t_sum-sum;
    }
};