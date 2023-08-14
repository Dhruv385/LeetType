//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int m=1000000007;
	int solve(int i,int arr[],int n,int sum,vector<vector<int>> &dp){
	    if(sum<0)
	        return 0;
	    if(n==i && sum!=0)
	        return 0;
	    if(i==n && sum==0)
	        return 1;
	    if(arr[i]!=0 && sum==0)
	        return 1;
	        
	    if(dp[i][sum]!=-1)
	        return dp[i][sum];
	    return dp[i][sum]=(solve(i+1,arr,n,sum-arr[i],dp)%m+solve(i+1,arr,n,sum,dp)%m)%m;
	}
	int perfectSum(int arr[], int n, int sum){
	    vector<vector<int>> dp(n,vector<int> (sum+1,-1));
        return solve(0,arr,n,sum,dp);
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends