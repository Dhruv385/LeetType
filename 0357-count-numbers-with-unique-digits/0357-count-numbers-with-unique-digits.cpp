class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0)
            return 1;
        int a=10,c= 9,t=9;
        for(int i=0;i<n-1;i++){
            c*=t;
            a+=c;
            t--;
        }
        return a;
    }
};