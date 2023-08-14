//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int a[],int n,int k){ 
        int res=0, presum=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            presum+=a[i];
            if(presum==k)
                res=max(res,i+1);
            if(m.find(presum-k)!=m.end())
                res=max(res,i-m[presum-k]);
            if(m.find(presum)==m.end())
                m.insert({presum,i});
        }
        return res;
    } 
};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends