//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int solve(int coins[],int m,int v,vector<int> &dp){
	    if(v==0)
	        return 0;
	    if(v<0)
	        return -1;
	        
	    if(dp[v]!=-1)
	        return dp[v];
	   
	    int ans=INT_MAX;
	    for(int i=0;i<m;i++){
	        int s=solve(coins,m,v-coins[i],dp);
	        if(s!=-1 && s<ans)
	            ans=s;
	    }
	    return dp[v]=(ans==INT_MAX)? -1: (ans+1);
	}
	int minCoins(int coins[], int m, int v) { 
	    vector<int> dp(v+1,-1);
	    return solve(coins,m,v,dp);
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends