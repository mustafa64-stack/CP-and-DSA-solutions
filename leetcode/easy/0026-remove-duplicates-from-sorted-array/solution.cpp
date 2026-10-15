class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=0;
        int ele=-101;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=ele){
                ele=nums[i];
                nums[cnt++]=ele;
            }
        }
        return cnt;
    }
};