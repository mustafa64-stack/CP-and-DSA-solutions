# Spiral Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an `m x n` `matrix`, return  *all elements of the*  `matrix`  *in spiral order*.

 

 **Example 1:** 

```
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

```

 **Example 2:** 

```
Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]

```

 

 **Constraints:** 

- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 10
- -100 <= matrix[i][j] <= 100

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 2.42%)  
**Memory:** 9.2 MB (beats 83.64%)  
**Submitted:** 2026-10-19T18:01:56.107Z  

```cpp
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int n=matrix.size();
        int m=matrix[0].size();
        int left=0,right=m-1,top=0,bot=n-1;
        while(left<=right && top<=bot){
            for(int i=left;i<=right;i++) v.push_back(matrix[top][i]);
            top++;
            for(int i=top;i<=bot;i++) v.push_back(matrix[i][right]);
            right--;
            if(top<=bot){
            for(int i=right;i>=left;i--) v.push_back(matrix[bot][i]);
            bot--;
            }
            if(left<=right){
            for(int i=bot;i>=top;i--) v.push_back(matrix[i][left]);
            left++;
            }
        }
        return v;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/spiral-matrix/)