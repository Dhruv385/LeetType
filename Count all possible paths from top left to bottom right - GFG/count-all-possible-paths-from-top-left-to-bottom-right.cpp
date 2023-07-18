//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int mod=1000000007;
    long long int solve(int m,int n){
        vector<vector<long long int>> dp(m+1,vector<long long int> (n+1,0));
        
        for(int i=0;i<n;i++)
            dp[0][i]=1;
        for(int i=0;i<m;i++)
            dp[i][0]=1;
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=(dp[i-1][j]%mod+dp[i][j-1]%mod)%mod;
            }
        }
        return dp[m-1][n-1]%mod;
    }
    long long int numberOfPaths(int m, int n){
        return solve(m,n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}

// } Driver Code Ends