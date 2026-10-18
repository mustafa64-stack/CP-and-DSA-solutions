class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int curr_max=0,curr_min=0;
        int total_sum=0;
        int maxs=nums[0];
        int mins=nums[0];
        for(auto i:nums){
            curr_max=max(curr_max+i,i);
            curr_min=min(curr_min+i,i);
            total_sum+=i;
            maxs=max(maxs,curr_max);
            mins=min(mins,curr_min);
        }
        int circular_sum=total_sum-mins;
        if(maxs<0) return maxs;
        return max(circular_sum,maxs);

    }
};