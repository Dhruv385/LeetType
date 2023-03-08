class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        vector<string> po;
        for(int i=0;i<=30;i++){
            int p=pow(2,i);
            po.push_back(to_string(p));
        }
        for(int i=0;i<=30;i++)
            sort(po[i].begin(),po[i].end());
        for(int i=0;i<=30;i++){
            if(po[i]==s)
                return true;
        }
        return false;
    }
};