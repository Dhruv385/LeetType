class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        float y= coordinates[1][1] - coordinates[0][1];
        float x= coordinates[1][0] - coordinates[0][0];
        float curr_x,curr_y;
        for(int i=2;i<coordinates.size();i++){
            curr_y=coordinates[i][1]-coordinates[i-1][1];
            curr_x=coordinates[i][0]-coordinates[i-1][0];
            if(curr_x*y!=curr_y*x)
                return false;
        }
        return true;
    }
};