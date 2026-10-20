class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(auto & i:matrix){
            int rig=m-1;
            int lef=0;
            while(rig>=lef){
                int mid=lef+(rig-lef)/2;
                if(i[mid] > target){
                    rig=mid-1;
                }
                else if(i[mid]<target){
                    lef=mid+1;
                }
                else {
                    return true;
                }
            }
        }
        return false;
    }
};