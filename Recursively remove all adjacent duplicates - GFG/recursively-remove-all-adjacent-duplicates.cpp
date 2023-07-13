//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    string rremove(string s){
        string str="";
        int n=s.size();
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                while(s[i]==s[i+1])
                    i++;
            }
            else    
                str+=s[i];
        }
        if(s[n-2]!=s[n-1])
            str+=s[n-1];
        if(str.size()==n)
            return str;
        return rremove(str);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends