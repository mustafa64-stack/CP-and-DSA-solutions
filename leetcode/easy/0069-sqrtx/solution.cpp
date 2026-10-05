class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x; 
        int l=0,r=x,ans;
        while(l<=r){
            int mid=(l+((r-l)>>1));
            if(mid>x/mid){
                r=mid-1;
            }else {l=mid+1;
            ans=mid;}
        }return ans;
    }
};