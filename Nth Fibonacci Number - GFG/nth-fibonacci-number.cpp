//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int m=1000000007;
    int fib(int n){
        int prev2=1;
        int prev1=1;
        
        for(int i=3;i<=n;i++){
            int ans=prev1%m+prev2%m;
            prev2=prev1;
            prev1=ans;
        }
        return prev1%m;
    }
    int nthFibonacci(int n){
        return fib(n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends