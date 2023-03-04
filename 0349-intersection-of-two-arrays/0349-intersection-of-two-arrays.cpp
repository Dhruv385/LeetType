class Solution {
public:
    vector<int> intersection(vector<int>& num1, vector<int>& num2) {
        vector<int> num3;
        sort(num1.begin(),num1.end());
        sort(num2.begin(),num2.end());
        int i=0,j=0;
        while(i<num1.size() && j<num2.size()){
            if(num1[i]==num2[j]){
                num3.push_back(num1[i]);
                i++;
                j++;
            }
            else if(num1[i]<num2[j])
                i++;
            else
                j++;
            while(i>0 && i<num1.size() && num1[i]==num1[i-1]) 
                i++;
            while(j>0 && j<num2.size() && num2[j]==num2[j-1]) 
                j++;
        }
        return num3;
    }
};