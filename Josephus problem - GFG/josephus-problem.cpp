//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int solve(int n,int k,vector<int> &dp){
        if(n==1)
            return 1;
            
        if(dp[n]!=-1)
            return dp[n];
            
        int x=solve(n-1,k,dp);
        return dp[n]=(x+k)%n==0 ? n : (x+k)%n;
    }
    int josephus(int n, int k){
        vector<int> dp(n+1,-1);
       return solve(n,k,dp);
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends