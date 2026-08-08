class Solution {
public:
    bool isFreqSame(vector<int>f1,vector<int>f2){
        for(int i=0;i<26;i++){
            if(f1[i]!=f2[i])return false;
        }return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())return false;
        vector<int>f1(26,0);
        vector<int>f2(26,0);
        for(char c:s1){
            f1[c-'a']++;
        }int winSize=s1.size();
        //first window
        for(int i=0;i<winSize;i++){
            f2[s2[i]-'a']++;
        }if(isFreqSame(f1,f2))return true;
        //slide window
        for(int i=winSize;i<s2.size();i++){
            f2[s2[i]-'a']++; //add new char
            f2[s2[i-winSize]-'a']--; //remove old char

            if(isFreqSame(f1,f2))return true;
        }return false;

    }
};