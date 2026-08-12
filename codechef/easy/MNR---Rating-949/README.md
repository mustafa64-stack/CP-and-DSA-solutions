# MNR - Rating 949

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Range Minimize

You are given an array $A$ containing $N$ integers.
You can delete  **at most two**  of its elements.

Find the minimum possible value of $(\max(A) - \min(A))$ (in other words, the range of $A$) after the deletions.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains a single integer $N$ — the length of the array. The second line contains $N$ space-separated integers $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the minimum possible value of $\max(A) - \min(A)$ after at most two deletions.

### Constraints
- $1 \leq T \leq 10^5$
- $3 \leq N \leq 2\cdot 10^5$
- $1 \leq A_i \leq 10^9$
- The sum of $N$ over all test cases won't exceed $2\cdot 10^5$.
### Sample 1:
Input
Output

```
3
3
2 3 1
5
1 10000 10 100 1000
6
64 11 998 1005 843 945

```

```
0
99
162

```

### Explanation:

 **Test case $1$:**  Delete $1$ and $2$ to make the array $A = [3]$.
$\max(A) - \min(A) = 0$ which is the best we can do.

 **Test case $2$:**  Delete $A_2 = 10000$ and $A_5 = 1000$ to obtain $A = [1, 10, 100]$, for which $\max(A) - \min(A) = 99$.

 **Test case $3$:**  Delete $A_1 = 64$ and $A_2 = 11$ to obtain $A = [998, 1005, 843, 945]$, which has a range of $162$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-12T11:29:49.608Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        long long op1=a[n-1]-a[2];
        long long op2=a[n-2]-a[1];
        long long op3=a[n-3]-a[0];
        cout<<min({op1,op2,op3})<<"\n";
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/MNR)