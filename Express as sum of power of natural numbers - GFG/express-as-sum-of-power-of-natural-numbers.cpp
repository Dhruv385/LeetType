//{ Driver Code Starts
// Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    int mod=1000000007;
    int solve(int n,int x,int num,vector<vector<int>> &dp){
        int temp=pow(num,x);
        if(n<0)
            return 0;
        if(n==0)
            return 1;
        if(temp>n)
            return 0;
        
        if(dp[n][num]!=-1)
            return dp[n][num];
            
        return dp[n][num]=(solve(n-temp,x,num+1,dp)%mod+solve(n,x,num+1,dp)%mod)%mod;
    }
    int numOfWays(int n, int x){
        vector<vector<int> > dp(n+1,vector<int> (n+1,-1));
        return solve(n,x,1,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n, x;
        cin >> n >> x;
        Solution ob;
        cout<<ob.numOfWays(n, x)<<endl;
    }
    return 0;
}

// } Driver Code Ends