class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>0)
            return haystack.find(needle);
        else
            return -1;
    }
};