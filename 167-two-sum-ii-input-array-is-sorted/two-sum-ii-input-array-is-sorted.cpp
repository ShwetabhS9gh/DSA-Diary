class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        while(start<end){
            if(nums[start]+nums[end]>tar){
                end--;
            }else if(nums[start]+nums[end]<tar){
                start++;
            }else{
                vector<int>m={start+1,end+1};
                return m;
            }
        }return {};
    }
};