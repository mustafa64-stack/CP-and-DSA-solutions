# EXAMTIME - Rating 1001

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-13T19:46:35.241Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=k) {
                k-=a[i];
                cout<<1;
            }else cout<<0;
        }cout<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/EXAMTIME)