//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumSum(string s) {
        for(int i=0,j=s.length()-1;i<j;i++,j--){
            if(s[i]==s[j] || s[i]=='?' || s[j]=='?'){
                if(s[i]!='?')
                    s[j]=s[i];
                else if(s[j]!='?')
                    s[i]=s[j];
                else
                    continue;
            }
            else
                return -1;
        }
        int sum=0;
        for(int i=0;i<s.length()/2;){
            char c=s[i];
            if(c=='?'){
                while(s[i]=='?' && i<s.length()/2)
                    i++;
            }
            else{
                i++;
                while(s[i]=='?' && i<s.length()/2)
                    i++;
                if(s[i]!='?')
                    sum=sum+abs(c-s[i]);
            }
        }
        return sum*2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends