class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        int ele1=INT_MIN,ele2=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==ele1){
                cnt1++;
             }else if(nums[i]==ele2){
                cnt2++;
            }else if(cnt1==0){
                cnt1=1;
                ele1=nums[i];
            }else if(cnt2==0){
                cnt2=1;
                ele2=nums[i];
            }else{cnt1--; cnt2--;}
        }vector<int> ls;
        cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ele1)cnt1++;
            if(nums[i]==ele2)cnt2++;
        }
        if(cnt1>n/3)ls.push_back(ele1);
        if(ele2!=ele1 &&cnt2>n/3)ls.push_back(ele2);
        sort(ls.begin(),ls.end());
        return ls;
    }
};