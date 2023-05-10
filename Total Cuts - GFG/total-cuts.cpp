//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int n,int k,vector<int> &A){
        int a1[n],a2[n];
        int m1=INT_MIN;
        for(int i=0;i<n;i++){
            m1=max(m1,A[i]);
            a1[i]=m1;
        }
        int m2=INT_MAX;
        for(int i=n-1;i>=0;i--){
            m2=min(m2,A[i]);
            a2[i]=m2;
        }
        int res=0;
        for(int i=1;i<n;i++){
            if(a1[i-1]+a2[i]>=k)
                res++;
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends