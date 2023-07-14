//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isSafe(int row,int col,vector<vector<int>> &mat,int val){
        for(int i=0;i<9;i++){
            if(mat[row][i]==val || mat[i][col]==val)
                return false;
            if(mat[3*(row/3)+i/3][3*(col/3)+i%3]==val)
                return false;
        }
        return true;
    }
    int isValid(vector<vector<int>> mat){
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(mat[i][j]==0) 
                    continue;
                int val=mat[i][j];
                mat[i][j]=0;
                if(!isSafe(i,j,mat,val)) 
                    return 0;
                mat[i][j]=val;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for(int i = 0;i < 81;i++)
            cin>>mat[i/9][i%9];
        
        Solution ob;
        cout<<ob.isValid(mat)<<"\n";
    }
    return 0;
}
// } Driver Code Ends