//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    int mod=1e9+7;
	    int solve(int n,vector<int> &dp){
	        if(n==0 || n==1)
	            return 1;
	            
	        if(dp[n]!=-1)    
	            return dp[n]%mod;
	            
	        return dp[n]=(solve(n-2,dp)%mod+solve(n-1,dp)%mod)%mod;
	    }
		int nthPoint(int n){
		    vector<int> dp(n+1,-1);
		    return solve(n,dp);
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends