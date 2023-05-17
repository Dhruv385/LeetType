//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    private:
        void solve(string S,vector<string> &s,int ind){
            if(ind==S.length()-1){
                s.push_back(S);
                return ;
            }
            for(int j=ind;j<S.length();j++){
                swap(S[ind],S[j]);
                solve(S,s,ind+1);
                swap(S[ind],S[j]);
            }
        }
	public:
		vector<string>find_permutation(string S)
		{
		    vector<string> s;
		    int ind=0;
		    solve(S,s,ind);
		    sort(s.begin(),s.end());
		    s.erase(unique(s.begin(),s.end()),s.end());
		    return s;
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
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends