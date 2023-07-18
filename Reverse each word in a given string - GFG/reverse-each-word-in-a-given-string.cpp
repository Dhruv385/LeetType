//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string st)
    {
        int s=0,e;
        for(int i=0;i<st.length();i++){
            if(st[i]=='.'){
                e=i-1;
                while(s<e){
                    swap(st[s],st[e]);
                    s++;e--;
                }
                s=i+1;
            }
            if(i==st.length()-1){
                e=i;
                while(s<e){
                    swap(st[s],st[e]);
                    s++;e--;
                }
            }
        }
        return st;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends