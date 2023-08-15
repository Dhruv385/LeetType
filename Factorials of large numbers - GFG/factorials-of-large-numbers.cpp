//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> solve(vector<int> &res,int num){
        int carry=0;
        for(int i=0;i<res.size();i++){
            int prod=res[i]*num+carry;
            res[i]=prod%10;
            carry=prod/10;
        }
        while(carry){
            res.push_back(carry%10);
            carry/=10;
        }
        return res;
    }
    vector<int> factorial(int n){
        vector<int> res;
        res.push_back(1);
        for (int i=2;i<=n;++i) 
            solve(res,i);
        reverse(res.begin(),res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends