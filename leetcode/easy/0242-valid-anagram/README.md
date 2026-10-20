# Valid Anagram

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

 

 **Example 1:** 

 **Input:**  s = "anagram", t = "nagaram"

 **Output:**  true

 **Example 2:** 

 **Input:**  s = "rat", t = "car"

 **Output:**  false

 

 **Constraints:** 

- 1 <= s.length, t.length <= 5 * 104
- s and t consist of lowercase English letters.

 

 **Follow up:**  What if the inputs contain Unicode characters? How would you adapt your solution to such a case?

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 54.55%)  
**Memory:** 9.6 MB (beats 74.12%)  
**Submitted:** 2026-10-20T10:10:07.349Z  

```cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v1(26,0);
        vector <int> v2(26,0);
        for(auto &i:s){
            v1[(int)(i-'a')]++;
        } 
        for(auto &i:t){
            v2[(int)(i-'a')]++;
        } 
        return v1==v2;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-anagram/)