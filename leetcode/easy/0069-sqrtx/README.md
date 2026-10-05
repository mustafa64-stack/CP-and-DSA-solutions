# Sqrt(x)

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a non-negative integer `x`, return  *the square root of* `x` *rounded down to the nearest integer*. The returned integer should be  **non-negative**  as well.

You  **must not use**  any built-in exponent function or operator.

- For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

 

 **Example 1:** 

```
Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.

```

 **Example 2:** 

```
Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

```

 

 **Constraints:** 

- 0 <= x <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.4 MB (beats 86.39%)  
**Submitted:** 2026-10-05T07:18:34.979Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/sqrtx/)