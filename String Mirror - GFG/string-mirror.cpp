//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string str){
        char c=str[0];
        string ans;
        ans.push_back(str[0]);
        for(int i=1; i<str.length(); i++){
            if(str[1]==str[0])
                break;
            if(c>=str[i]){
                ans=ans+str[i];
                c=str[i];
            }
            else
                break;
        }
        string left=ans;
        reverse(left.begin(), left.end());
        return ans+left;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends