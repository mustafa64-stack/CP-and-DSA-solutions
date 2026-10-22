# Valid Palindrome

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A phrase is a  **palindrome**  if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` *if it is a  **palindrome**, or* `false` *otherwise*.

 

 **Example 1:** 

```
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

```

 **Example 2:** 

```
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

```

 **Example 3:** 

```
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

```

 

 **Constraints:** 

- 1 <= s.length <= 2 * 105
- s consists only of printable ASCII characters.

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 45.50%)  
**Memory:** 9.6 MB (beats 99.09%)  
**Submitted:** 2026-10-22T18:27:23.600Z  

```cpp
class Solution {
public:
    bool isAlphanum(char ch){
        if((ch>='0' && ch<='9')|| (tolower(ch)>='a' && tolower(ch)<='z') )
        return true;
        return false;
    }
    bool isPalindrome(string s) {
        int st=0,end=s.size()-1;
        while(st<end){
            if(!isAlphanum(s[st])){
                st++;continue;
            }
            if(!isAlphanum(s[end])){
                end--;continue;
            }
            if(tolower(s[st])!=tolower(s[end])){
                return false;
            }
            st++;end--;
        }
        return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-palindrome/)