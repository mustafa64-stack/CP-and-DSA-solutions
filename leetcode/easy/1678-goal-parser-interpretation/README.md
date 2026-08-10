# Goal Parser Interpretation

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You own a  **Goal Parser**  that can interpret a string `command`. The `command` consists of an alphabet of `"G"`, `"()"` and/or `"(al)"` in some order. The Goal Parser will interpret `"G"` as the string `"G"`, `"()"` as the string `"o"`, and `"(al)"` as the string `"al"`. The interpreted strings are then concatenated in the original order.

Given the string `command`, return  *the  **Goal Parser** 's interpretation of* `command`.

 

 **Example 1:** 

```
Input: command = "G()(al)"
Output: "Goal"
Explanation: The Goal Parser interprets the command as follows:
G -> G
() -> o
(al) -> al
The final concatenated result is "Goal".

```

 **Example 2:** 

```
Input: command = "G()()()()(al)"
Output: "Gooooal"

```

 **Example 3:** 

```
Input: command = "(al)G(al)()()G"
Output: "alGalooG"

```

 

 **Constraints:** 

- 1 <= command.length <= 100
- command consists of "G", "()", and/or "(al)" in some order.

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 42.87%)  
**Memory:** 8.2 MB (beats 76.34%)  
**Submitted:** 2026-08-10T16:49:24.771Z  

```cpp
class Solution {
public:
    string interpret(string command) {
        string str;
        for(int i=0;i<command.size();i++){
            if(command[i]=='G'){
                str+='G';
                continue;
            }else if(command[i]=='(' && command[i+1]==')'){
                str+='o';
                       
            }else if(command[i]=='('){
                str+="al";
            }else continue;
        }return str;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/goal-parser-interpretation/)