# Reverse String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Write a function that reverses a string. The input string is given as an array of characters `s`.

You must do this by modifying the input array in-place with `O(1)` extra memory.

 

 **Example 1:** 

```
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

```

 **Example 2:** 

```
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

```

 

 **Constraints:** 

- 1 <= s.length <= 105
- s[i] is a printable ascii character.

## Solution

**Language:** C++  
**Runtime:** 69 ms (beats 2.08%)  
**Memory:** 27.3 MB (beats 15.58%)  
**Submitted:** 2026-09-20T15:30:54.537Z  

```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
        char c;
        for(int i=0;i<s.size()/2;i++){
            c=s[s.size()-i-1];
            s[s.size()-i-1]=s[i];
            s[i]=c;
        }
        for(auto i :s) cout<<i;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-string/)