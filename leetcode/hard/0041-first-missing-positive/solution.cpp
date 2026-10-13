class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<=0) nums[i]=n+1;
        }
        int idx;
        for(int i=0;i<n;i++){
            int num=abs(nums[i]);
            idx=num-1;
            if(idx>=0 && idx<n && nums[idx]>0){
                nums[idx]=-nums[idx];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0) return i+1;
        }
        return n+1;
    }
};