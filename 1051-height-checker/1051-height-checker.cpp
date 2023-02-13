class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int cnt=0;
        vector<int> h;
        h=heights;
        sort(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++){
            if(h[i]!=heights[i])
                cnt++;
        }
        return cnt;
    }
};