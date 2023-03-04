class Solution {
public:
    void merge(vector<int> &a,int p,int q,int r){
        int n1=q-p+1;
        int n2=r-q;
        int L[n1],M[n2];
        for(int i=0;i<n1;i++)
            L[i]=a[p+i];
        for(int j=0;j<n2;j++)
            M[j]=a[q+1+j];
        int i, j, k;
        i = 0;
        j = 0;
        k = p;
        while(i<n1 && j<n2){
            if(L[i]<M[j]){
                a[k]=L[i];
                i++;
                k++;
            }
            else if(L[i]>M[j]){
                a[k]=M[j];
                j++;
                k++;
            }
            else if(L[i]==M[j]){
                a[k]=L[i];
                i++;
                k++;
                a[k]=M[j];
                j++;
                k++;
            }
        }
        while(i<n1){
            a[k]=L[i];
            i++;
            k++;
        }
        while(j<n2){
            a[k]=M[j];
            j++;
            k++;
        }
    }
    void mergeSort(vector<int> &a, int l, int r) {
      if(l<r){
        int m=l+(r-l)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
      }
    }
    void sortColors(vector<int>& nums) {
        vector<int> a;
        mergeSort(nums,0,nums.size()-1);
        for(int i=0;i<nums.size();i++){
            a.push_back(nums[i]);
        }
    }
};