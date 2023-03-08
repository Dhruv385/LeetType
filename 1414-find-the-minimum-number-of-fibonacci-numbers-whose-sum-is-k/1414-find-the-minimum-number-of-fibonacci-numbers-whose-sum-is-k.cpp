class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> v;
        int cnt=0;
        int a=1,b=1,c=0;
        v.push_back(a);
        v.push_back(b);
        while(c<=k){
            c=a+b;
            v.push_back(c);
            a=b;
            b=c;
        }
        reverse(v.begin(),v.end());
        for(int i:v){
            if(i<=k){
                cnt++;
                k-=i;
            }
        }
        return cnt;
    }
};