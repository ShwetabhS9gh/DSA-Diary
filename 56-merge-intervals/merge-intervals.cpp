class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>merged;
        for(auto interval:intervals){
            //if the intervals overlap,update it
            //if the current interval doesnt overlap the previous ,just push the interval back in the list
            if(merged.empty()||merged.back()[1]<interval[0]){
                merged.push_back(interval);
            }else{
                merged.back()[1]=max(merged.back()[1],interval[1]);
            }
        }return merged;
    }
};