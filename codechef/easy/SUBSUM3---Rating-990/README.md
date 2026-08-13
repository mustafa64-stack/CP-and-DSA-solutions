# SUBSUM3 - Rating 990

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Subset Sum 3

You are given an array $A$ of $N$ integers. Determine if their exists a non-empty subsequence$^{\dagger}$ of $A$ such that the sum is divisible by $3$.

Print $\text{Yes}$ or $\text{No}$ accordingly. You  **do not**  need to print an example of such a subset.

$^{\dagger}$ $B$ is said to be a subset of $A$ if $B$ can be formed by deleting some elements in $A$ without rearranging the order of the remaining elements. For example, $[1, 2]$, $[1, 1, 2, 3]$, $[2, 3]$ are valid subsequences of $[1, 1, 2, 3]$ but $[2, 1]$ or $[2, 2]$ is not.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line of each test case contains $N$ - the size of the array. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line $\text{Yes}$ or $\text{No}$ depending on whether there exists a non-empty subsequence with sum divisible by $3$ or not.

Each character can be printed in either case, i.e. $\text{yes}$, $\text{YES}$ and $\text{yES}$ will all be accepted as positive responses.

### Constraints
- $1 \le T \le 100$
- $1 \le N \le 100$
- $1 \le A_i \le 100$
### Sample 1:
Input
Output

```
6
1
2
1
3
2
2 1
2
4 4
4
1 5 1 5
2
3 3

```

```
No
Yes
Yes
No
Yes
Yes
```

### Explanation:

 **Test Case 1**  : There is only one element, which is not divisible by $3$.

 **Test Case 2**  : There is only one element, which is divisible by $3$.

 **Test Case 3**  : We can take the whole array $[1, 2]$ as that has a sum of $3$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-13T10:40:47.728Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int re1=0,re2=0,re0=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%3==0) re0++;
            else if(a[i]%3==1) re1++;
            else re2++;
        }
        if(re0>=1||re1>=3||re2>=3 || (re1>=1 && re2>=1)) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SUBSUM3)