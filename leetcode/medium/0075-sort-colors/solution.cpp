class Solution {
public:
    void sortColors(vector<int>& nums) {
        int temp,t;
        for(int i=0;i<nums.size();i++){
            temp=i;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]<nums[temp]) {temp=j;}
            }
            swap(nums[temp],nums[i]);

        }
    }
};