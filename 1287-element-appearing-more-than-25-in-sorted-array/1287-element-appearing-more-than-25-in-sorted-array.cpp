class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size(), i=0, n1=(n/4);
        for(i; i<n-n1; i++){
            if(arr[i]==arr[i+n1]){
                return arr[i];
            }
        }
        return arr[i];
    }
};