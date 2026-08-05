# UWCOI20A - Rating 600

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-05T17:18:15.088Z  

```c_cpp
string solve(int N, int X, const vector<int>& A) {
    int flag=0;
    for(int i=0;i<N;i++){
        if(A[i]==X){
            flag=1;
            break;
        }
    }if(flag){
        return "YES";
    }else return "NO";
}

```

---

[View on CodeChef](https://www.codechef.com/problems/UWCOI20A)