class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v;
        k=k%nums.size();
        int n=nums.size();
        for(int i=(n-k);i<n;i++){
            v.push_back(nums[i]);
        }
        for(int i=0;i<n-k;i++){
            v.push_back(nums[i]);
        }
        nums=v;
    }
};