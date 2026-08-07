# MAXCONSECU - Rating 970

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-07T07:17:13.984Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        int minn=1e5+1;
        int sum=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            minn=min(a[i],minn);
            sum+=a[i];
        }
        cout<<sum-minn<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/MAXCONSECU)