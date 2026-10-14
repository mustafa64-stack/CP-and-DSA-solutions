class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left=0;
        int right=0;
        int i=0;
        vector <int> v(m);
        for(int i=0;i<m;i++){
            v[i]=nums1[i];
        }
        while(left<m && right <n){
            if(v[left]>=nums2[right]){
                nums1[i++]=nums2[right++];
            }else {
                nums1[i++]=v[left++];
            }
        }
        while(left<m) {
            nums1[i++]=v[left++];
        }
        while(right<n){
            nums1[i++]=nums2[right++];
        }
    }
};