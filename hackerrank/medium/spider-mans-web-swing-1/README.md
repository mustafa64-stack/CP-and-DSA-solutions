# 1. Spider-Man's Web Swing 1

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Spider-Man is swinging across New York City, keeping track of the heights of the buildings he passes. He wants to start swinging from one building and reach a taller building later in his journey to gain maximum height. Given an array of building heights, help Spider-Man find the maximum height difference he can achieve. If he cannot reach a taller building, return 0.

 **Input Format** 

The first line contains an integer n, representing the number of buildings. The second line contains n space-separated integers representing the building heights.

 **Constraints** 

1 <= heights.length <= 10^5 0 <= heights[i] <= 10^4 You must buy (start) before you sell (reach the taller building). Return 0 if no positive difference exists.

 **Output Format** 

Print a single integer representing the maximum height difference. If no taller building exists later in the array, print 0.

 **Sample Input 0** 

```
7 1 5 3 6 4

```

 **Sample Output 0** 

```
5

```

 **Sample Input 1** 

```
7 6 4 3 1

```

 **Sample Output 1** 

```
0

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-25T18:46:12.954Z  

```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    vector<int> h;
    while(cin>>n){
        h.push_back(n);
    }
    n=h.size() ;
    int lowest=INT_MAX;
    int bd=0;
    for(int i=0;i<n;i++){
        lowest=min(h[i],lowest);
        bd=max(h[i]-lowest,bd);

    }  
            cout<<bd;
            
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/spider-mans-web-swing-1/problem)