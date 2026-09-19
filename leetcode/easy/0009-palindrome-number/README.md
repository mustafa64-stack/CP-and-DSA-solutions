# Palindrome Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `x`, return `true` if `x` is a  **palindrome**, and `false` otherwise.

 

 **Example 1:** 

```
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

```

 **Example 2:** 

```
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

```

 **Example 3:** 

```
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

 

 **Follow up:**  Could you solve it without converting the integer to a string?

## Solution

**Language:** C++  
**Runtime:** 7 ms (beats 13.41%)  
**Memory:** 8.6 MB (beats 36.11%)  
**Submitted:** 2026-09-19T19:56:53.607Z  

```cpp
class Solution {
public:
    bool isPalindrome(int x) {
        long long rev_num=0;
    int num=x;
    int last_digit;
    while(num>0){
        last_digit=num%10;
        rev_num=rev_num*10+last_digit;
        num/=10;
    }
    if(rev_num==x){
        return true;
    }return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/palindrome-number/)