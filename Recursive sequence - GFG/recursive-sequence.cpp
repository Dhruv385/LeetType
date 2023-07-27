//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long solve(int n,long long k){
        if(n==1)    
            return 1;
        long long sum=1;
        for(int i=0;i<n;i++)
            sum=sum*(k--);
        return sum+solve(n-1,k);
    }
    long long sequence(int n){
        long long k=(n*(n+1))/2;
        return solve(n,k); 
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends