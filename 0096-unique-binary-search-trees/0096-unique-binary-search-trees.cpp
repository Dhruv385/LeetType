class Solution {
public:
    int numTrees(int n) {
        // catelyn number
        // (2n)!/((n+1)!*n!)
        int a[n+1];
        a[0]=1;
        a[1]=1;
        int i,j;
        for(i=2;i<=n;i++){
            a[i]=0;
            for(j=0;j<i;j++){
                a[i]=a[i]+a[j]*a[i-j-1];
            }
        }
        return a[n];
    }
};