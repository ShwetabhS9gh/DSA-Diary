class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sing,doub;
        for(auto x:nums){
            if(x>9)doub+=x;
            else sing+=x;
        }return !(sing==doub);
    }
};