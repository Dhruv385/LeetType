//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void solve(string S,set<string> &ans,int ind){
	        if(ind>=S.length()){
	            ans.insert(S);
	            return;
	        }
	        for(int j=ind;j<S.length();j++){
	            swap(S[ind],S[j]);
	            solve(S,ans,ind+1);
	            swap(S[ind],S[j]);
	        }
	    }
		vector<string>find_permutation(string S){
		    set<string> ans;
		    int ind=0;
		    solve(S,ans,ind);
		    vector<string> v(ans.begin(),ans.end());
		    return v;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends