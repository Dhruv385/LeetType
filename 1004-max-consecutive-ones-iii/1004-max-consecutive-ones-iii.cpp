class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i,j;
        int size=0,max=0;
        for(i=0,j=0;j<nums.size();j++){
            if(nums[j]==1){
                size++;
            }
            else{
                size++;
                k--;
                if(k<0){
                    while(nums[i]!=0){
                        i++;
                        size--;
                    }
                    i++;
                    size--;
                    k++;
                }
            }
            if(size>max)
                max=size;
        }
        return max;
    }
};