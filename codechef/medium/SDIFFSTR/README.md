# SDIFFSTR

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-13T07:32:45.957Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        double finish,distancrbolt,tial,bosp;
        cin>>finish>>distancrbolt>>tial>>bosp;
        if(finish/bosp>=sqrt((2.0*(distancrbolt+finish))/tial)) cout<<"Tiger";
        else cout<<"Bolt";
        cout<<"\n";
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SDIFFSTR)