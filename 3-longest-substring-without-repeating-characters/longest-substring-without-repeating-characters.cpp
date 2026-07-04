class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int n=s.size();
        int right=0;
        int maxLen=0;
        unordered_map <char,int> m;
        for(int right=0;right<n;right++){
            char x=s[right];
            if(m.find(x)!=m.end()){
                left=max(left,m[x]+1);
            }m[x]=right;
            maxLen=max(maxLen,right-left+1);
        }return maxLen;
    }
};