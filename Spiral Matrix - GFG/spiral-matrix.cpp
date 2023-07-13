//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        int rs=0,re=n-1;
        int cs=0,ce=m-1;
        vector<int> mat;
        while(rs<=re && cs<=ce){
            for(int j=cs;j<=ce;j++)
                mat.push_back(a[rs][j]);
            rs++;
            for(int i=rs;i<=re;i++)
                mat.push_back(a[i][ce]);
            ce--;
            if(rs<=re){
                for(int j=ce;j>=cs;j--)
                    mat.push_back(a[re][j]);
                re--;
            }
            if(cs<=ce){
                for(int i=re;i>=rs;i--)
                    mat.push_back(a[i][cs]);
                cs++;
            }
        }
        return mat[k-1];
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends