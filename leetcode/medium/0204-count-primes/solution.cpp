class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n+1,true);
        for(long long i=2;i<n;i++){
            if(prime[i]==true){
                for(long long j=i*i;j<n;j+=i)
                 prime[j]=false;
            }
        }
        long long cnt=0;
        for(long long i=2;i<n;i++){
            if(prime[i]){
                cnt++;
            }
        }return cnt;
    }
};