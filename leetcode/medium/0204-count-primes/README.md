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
**Runtime:** 606 ms (beats 40.10%)  
**Memory:** 130.1 MB (beats 28.66%)  
**Submitted:** 2026-10-02T14:21:06.452Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/count-primes/)