class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        vector<char> primes(n/2, 1);
        int ans = 1;
        for (int  i = 3; i*i < n; i+=2) {
            if (primes[i/2]) {
                
                
                for (int j = i*i; j < n; j += 2*i) primes[j/2] = 0;
            }
        }
        for(int i=3;i<n;i+=2){
            if(primes[i/2]) ans++;
        }
        return ans;
    }
};