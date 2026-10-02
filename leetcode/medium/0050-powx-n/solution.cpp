class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return (double)1;
        double m=x;
        if(n<0){
            for(int i=1;i<abs(n);i++) x=x*m;
            return 1.0/x;
        } 
        for(int i=1;i<n;i++) x=x*m;
        return x;
    }
};