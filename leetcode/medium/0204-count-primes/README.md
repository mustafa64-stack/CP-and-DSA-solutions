# Count Primes

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer `n`, return  *the number of prime numbers that are strictly less than*  `n`.

 

 **Example 1:** 

```
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

```

 **Example 2:** 

```
Input: n = 0
Output: 0

```

 **Example 3:** 

```
Input: n = 1
Output: 0

```

 

 **Constraints:** 

- 0 <= n <= 5 * 106

## Solution

**Language:** C++  
**Runtime:** 59 ms  
**Memory:** 8.8 MB  
**Submitted:** 2026-10-02T08:43:46.086Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/count-primes/)