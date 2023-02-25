class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=prices[0];
        int gain=0;
        for(int i=0;i<prices.size();i++){
            if(a>prices[i])
                a=prices[i];
            if(prices[i]-a>gain)
                gain=prices[i]-a;
        }
        return gain;
    }
};