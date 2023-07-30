//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int mod=1e9+7;
	long long solve(int n){
	    vector<long long> dp(n+1,0);
	    dp[0]=1;
	    dp[1]=2;
	    
	    for(int i=2;i<=n;i++){
	        dp[i]=(dp[i-1]+dp[i-2])%mod;
	    }
	    long long ans=(dp[n]*dp[n])%mod;
	    return ans;
	}
	int TotalWays(int n)
	{
	    return solve(n);
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends