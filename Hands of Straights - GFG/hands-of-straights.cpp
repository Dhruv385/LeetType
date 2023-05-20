//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        if(N%groupSize!=0)
            return false;
        if(N==1 || groupSize==1)
            return true;
        map<int,int> mp;
        for(int it: hand)
            mp[it]++;
        for(auto it: mp){
            if(it.second==0)
                continue;
            for(int j=it.first;j<it.first+groupSize;j++){
                if(mp[j]==0 || mp[j]<it.second)
                    return false;
                mp[j]-=it.second;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends