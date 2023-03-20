class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
        if(v.size()==1){
            if(v[0]==1 && n==1)
                return false;
            else 
                return true;
        }
        int x=0;
        int i=0;
        while(i<v.size()){
            if(i==0){
                if(v[i]==0 && v[i+1]==0){
                    x++;
                    i+=2;
                }
                else 
                    i++;
            }
            else if(i==v.size()-1){
                if(v[i]==0 && v[i-1]==0){
                    i+=2;
                    x++;
                }
                else
                    i++;
            }
           else if(v[i]==0 && v[i-1]==0 && v[i+1]==0){
                i+=2;
                x++;
            }
            else 
                i++;
        }
        if(x>=n)
            return true;
        else 
            return false;
    }
};