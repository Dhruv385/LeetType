class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int cnt;
        for(int i=0;i<arr.size();i++){
            cnt=0;
            for(int j=0;j<arr.size();j++){
                if(arr[i]==arr[j])
                    cnt++;
                if(cnt>(arr.size()/4))
                    return arr[i];
            }
        }
        return 0;
    }
};