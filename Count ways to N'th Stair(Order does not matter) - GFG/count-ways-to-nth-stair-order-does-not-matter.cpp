//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    int solve(int n){
	        vector<int> dp(n+1,0);
	        dp[0]=1;
	        dp[1]=1;
	       
	        for(int i=2;i<=n;i++)
	            dp[i]=dp[i-2]+1;
	        return dp[n];
	    }
		int nthStair(int n){
		    int ans=solve(n);
		    return ans;
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
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends