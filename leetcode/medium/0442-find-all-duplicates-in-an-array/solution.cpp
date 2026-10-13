class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int> v;
        int num,idx;
        for(int i=0;i<nums.size();i++){
            num=abs(nums[i]);
            idx=num-1;
            if(nums[idx]<0){
                v.push_back(num);
            }else{
                nums[idx]=-nums[idx];
            }
        }return v;
    }
};