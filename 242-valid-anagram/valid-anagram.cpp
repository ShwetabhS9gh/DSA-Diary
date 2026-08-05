class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.length()!=t.length())return false;
       unordered_map<char,int>m;
       for(auto c:s){
        m[c]++;
       }for(auto c:t){
        m[c]--;
       }for(auto c:s){
        if(m[c]>0)return false;
       }return true;
    }
};