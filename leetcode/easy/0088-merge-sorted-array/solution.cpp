class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int r=n-1,l=m-1;
        int idx=m+n-1;
        while(l>=0 && r>=0){
            if(nums1[l]<=nums2[r]){
                nums1[idx--]=nums2[r--];
            }else {
                nums1[idx--]=nums1[l--];
            }
        }
        while(r>=0) nums1[idx--]=nums2[r--];

    }
};