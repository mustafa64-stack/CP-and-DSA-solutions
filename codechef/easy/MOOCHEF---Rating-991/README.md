# MOOCHEF - Rating 991

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Moody Chef

Chef loves integers that are in the range of $l$ to $r$. More formally, Chef loves an integer $x$ if it satisfies the condition $l \leq x \leq r$.

Chef has an array $A$ of length $N$. Currently, the happiness of Chef is $0$.
He will examine the elements of the array in order from index $1$ to $N$.

If he finds an integer that he loves, his happiness will increase by $1$; otherwise, his happiness will decrease by $1$.
Find the values of  **maximum**  and  **minimum**  happiness Chef will experience while going through the array.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line of each test case contains three integers $N$, $l$ and $r$ — the number of elements in the array, the least number that chef loves, the biggest number that chef loves. The next contains $N$ space-separated integers, where the $i^{th}$ integer denotes $A_i$.
### Output Format

For each test case, output on a new line, two space-separated integers denoting the maximum and minimum happiness Chef will experience.

### Constraints
- $1 \leq T \leq 2 \cdot 10^5$
- $1 \leq N \leq 2 \cdot 10^5$
- $1 \leq l \leq r \leq 2 \cdot 10^5$
- $1 \leq A_i \leq 2 \cdot 10^5$
- The sum of $N$ over all test cases won't exceed $2.5 \cdot 10^5$.
### Sample 1:
Input
Output

```
2
4 1 3
4 3 2 1
2 5 5
1 4
```

```
2 -1
0 -2
```

### Explanation:

 **Test case $1$:**  The first element is $4$. As $l = 1$ and $r = 3$, this number makes chef sad, hence his happiness decreases by $1$. After this all three elements increases the chef's happiness. Hence, the maximum happiness is $2$, whereas the minimum happiness is $-1$.

 **Test case $2$:**  As $l = r = 5$, neither of the elements of the array will increase chef's happiness. Hence maximum happiness equals $0$ (which was his happiness initially) and minimum happiness equals $-2$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-13T10:55:41.729Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        vector <int> a(n);
        int maxx=0,h=0,minn=0;
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=l && a[i]<=r) h++;
            else h--;
            maxx=max(maxx,h);
            minn=min(minn,h);
        }cout<<maxx<<" "<<minn<<endl;
        
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/MOOCHEF)