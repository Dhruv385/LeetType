class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> arr(nums.size());
        long long sum=0;
        int i,j,c;
        for(i=0;i<nums.size();i++)
            arr[i]=-1;
        if(nums.size()<2*k+1){
            return arr;
        }
        for(i=0;i<=2*k;i++)
            sum+=nums[i];
        arr[k]=sum/(2*k+1);
        for(i=0,j=(2*k+1),c=k+1;j<nums.size();i++,j++,c++){
            sum=sum-nums[i]+nums[j];
            arr[c]=sum/(2*k+1);
        }
        return arr;
    }
};