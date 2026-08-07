# LARGODDSTRIN - Rating 992

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-07T08:02:01.561Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        // your code goes here
        int mm,dd;
        mm=(s[0]-'0')*10+(s[1]-'0');
        dd=(s[3]-'0')*10+(s[4]-'0');
        if((mm>=00 && mm<=12 )&&(dd>12) ) cout<<"MM/DD/YYYY";
        else if((dd>=00 && dd<=12 )&&(mm>12)) cout<<"DD/MM/YYYY";
        else cout<<"both";
        cout<<"\n";
    }

}

```

---

[View on CodeChef](https://www.codechef.com/problems/LARGODDSTRIN)