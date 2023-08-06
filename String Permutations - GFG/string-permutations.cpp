//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    int fact(int n){
        int f=1;
        while(n>0){
            f=f*n;
            n--;
        }
        return f;
    }
    vector<string> permutation(string s){
        int n=s.size();
        int x=fact(n);
        vector<string> v;
        v.push_back(s);
        for(int i=0;i<x-1;i++){
            next_permutation(s.begin(),s.end());
            v.push_back(s);
        }
        sort(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends