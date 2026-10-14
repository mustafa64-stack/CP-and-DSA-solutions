class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=nums.size();
        for(int i=0;i<j;i++){
            if(nums[i]==val){
                swap(nums[i],nums[j-1]);
                nums.pop_back();
            }
        }
        return nums.size();
    }
};