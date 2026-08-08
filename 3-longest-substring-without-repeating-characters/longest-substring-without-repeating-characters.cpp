class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int maxLength=0;
        unordered_map<char,int>m;
        for(auto c:s){
            if(m.find(c)!=m.end()){
                left=max(m[c]+1,left);
            }m[c]=right;
            maxLength=max(maxLength,right-left+1);
            right++;
        }return maxLength;
    }
};