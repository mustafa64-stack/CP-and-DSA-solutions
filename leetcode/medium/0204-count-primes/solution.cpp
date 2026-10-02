class Solution {
public:
    int countPrimes(int n) {
        if(n<2) return 0;
        vector<bool> prime(n+1,true);
        for(long long i=2;i*i<=n;i++){
            if(prime[i]==true){
                for(long long j=i*i;j<=n;j+=i)
                 prime[j]=false;
            }
        }
    
        long long cnt=1;
        for(long long i=3;i<=n;i+=2){
            if(prime[i]){
                cnt++;
            }
        }return cnt;
    }
};