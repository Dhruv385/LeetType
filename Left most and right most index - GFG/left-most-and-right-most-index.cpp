//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int binaryleft(vector<long long> &v,long long x){
        int s=0,e=v.size()-1;
        int mid=(s+e)/2;
        int ans=-1;
        while(s<=e){
            mid=s+(e-s)/2;
            if(v[mid]==x){
                ans=mid;
                e=mid-1;
            }
            else if(v[mid]<x)
                s=mid+1;
            else
                e=mid-1;
        }
        return ans;
    }
    int binaryright(vector<long long> &v,long long x){
        int s=0,e=v.size()-1;
        int mid=(s+e)/2;
        int ans=-1;
        while(s<=e){
            mid=s+(e-s)/2;
            if(v[mid]==x){
                ans=mid;
                s=mid+1;
            }
            else if(v[mid]<x)
                s=mid+1;
            else
                e=mid-1;
        }
        return ans;
    }
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        pair<long,long> p{-1,-1};
        long long left=binaryleft(v,x);
        long long right=binaryright(v,x);
        p.first=left;
        p.second=right;
        return p;
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends