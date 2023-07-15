//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int a[], int n, int k)
    {
        vector<int> ans;
        map<int,int> mp;
        int j=0;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
            if(k==i-j+1){
                ans.push_back(mp.size());
                mp[a[j]]--;
                if(mp[a[j]]==0)
                    mp.erase(a[j]);
                j++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends