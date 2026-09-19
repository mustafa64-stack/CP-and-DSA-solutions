# Reverse Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a signed 32-bit integer `x`, return `x` *with its digits reversed*. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-231, 231 - 1]`, then return `0`.

 **Assume the environment does not allow you to store 64-bit integers (signed or unsigned).** 

 

 **Example 1:** 

```
Input: x = 123
Output: 321

```

 **Example 2:** 

```
Input: x = -123
Output: -321

```

 **Example 3:** 

```
Input: x = 120
Output: 21

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.6 MB (beats 20.50%)  
**Submitted:** 2026-09-19T19:53:18.890Z  

```cpp
class Solution {
public:
    int reverse(int x) {
        int rev_num=0;
        int last_digit;
        while(x!=0){
            last_digit=x%10;
            if (rev_num > INT_MAX / 10 || rev_num < INT_MIN / 10)
                return 0;
            rev_num=rev_num*10+last_digit;
            x=x/10;
        }
        return rev_num;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-integer/)