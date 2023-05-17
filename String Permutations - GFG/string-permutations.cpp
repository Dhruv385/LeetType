//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    private:
    void solve(string S,vector<string> &v,int ind){
        if(ind==S.length()){
            v.push_back(S);
            return ;
        }
        for(int j=ind;j<S.length();j++){
            swap(S[j],S[ind]);
            solve(S,v,ind+1);
            swap(S[j],S[ind]);
        }
    }
    public:
    //Complete this function
    
    vector<string> permutation(string S)
    {
        vector<string> v;
        int ind=0;
        solve(S,v,ind);
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