class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int a=0,m=0;
        for(int i=0;i<gain.size();i++){
            a+=gain[i];
            m=max(m,a);
        }
        return m;
    }
};