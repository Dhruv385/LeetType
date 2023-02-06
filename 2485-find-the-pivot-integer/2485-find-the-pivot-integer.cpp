class Solution {
public:
    int pivotInteger(int n) {
        int sum=0,sum1=0;
        for(int i=1;i<=n;i++)
            sum+=i;
        for(int i=n;i>0;i--){
            if(sum-sum1==i)
                return i;
            sum1+=i;
            sum-=i;
        }
        return -1;
    }
};