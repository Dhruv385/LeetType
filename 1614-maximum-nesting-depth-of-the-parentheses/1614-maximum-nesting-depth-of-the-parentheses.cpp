class Solution {
public:
    int maxDepth(string s) {
        int cnt=0,m=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                cnt++;
                m=max(m,cnt);
            }
            if(s[i]==')')
                cnt--;
        }
        return m;
    }
};