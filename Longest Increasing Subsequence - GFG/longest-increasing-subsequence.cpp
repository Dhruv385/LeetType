//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int search(vector<int> v,int s,int e,int a){
        while(s<e){
            int mid=(s+e)/2;
            if(v[mid]>=a)
                e=mid;
            else
                s=mid+1;
        }
        return e;
    }
    int longestSubsequence(int n, int a[])
    {
       vector<int> v(n);
       v[0]=a[0];
       int len=1;
       for(int i=1;i<n;i++){
            if(a[i]<v[0])
                v[0]=a[i];
            else if(a[i]>v[len-1])
                v[len++]=a[i];
            else
                v[search(v,0,len-1,a[i])]=a[i];
       }
       return len;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends