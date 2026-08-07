# TITLECASE

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-07T08:12:54.598Z  

```c_cpp
void findLargestOddSubstring(string num) {
    // write your code here...
    
    string s,p;
    for(char i:num){
        int in=i-'0';
        s+=i;
        if((in&1)) p=s;
        
    }if(p.size()) cout<<p;
    else cout<<-1;
    
}
```

---

[View on CodeChef](https://www.codechef.com/problems/TITLECASE)