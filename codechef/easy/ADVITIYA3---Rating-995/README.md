# ADVITIYA3 - Rating 995

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Cookie Day

A very caring mother has $N$ cookie jars with her. Each jar contains a different type of cookie.
There are $A_i$ cookies in the $i$-th jar.

The mother wanted to give some cookies to her $K$ children, and she decided to only distribute cookies  **of a single type**. That is, she'll choose  **exactly one**  of the $N$ jars and distribute the cookies within it.
She'd like to ensure a couple of things:

- Each child should receive at least $1$ cookie.
- Each child should also receive an equal number of cookies, in the spirit of fairness.

Under the above two conditions, what is the  **minimum**  number of "wasted" cookies, i.e, cookies that remain in the chosen jar after distribution?
If it is not possible to give out any cookies at all, print $-1$ instead.

### Input Format
- The first line of input contains a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains two space-separated integers $N$ and $K$ — the number of cookie jars and the number of children. The second line contains $N$ space-separated integers $A_1, A_2, \ldots, A_N$ — where $A_i$ is the number of cookies in the $i$-th jar.
### Output Format

For each test case, output on a new line a single integer denoting the minimum number of cookies that will go to waste.
If it is not possible to distribute the cookies at all, output $-1$ instead.

### Constraints
- $1 \le T \le 100$
- $1 \le N \le 100$
- $1 \le A_i, K \le 10^9$
### Sample 1:
Input
Output

```
4
4 3
7 8 2 1
4 4
1 2 3 1
4 1
1 1 1 1
4 1000
999 1500 2024 2100

```

```
1
-1
0
24

```

### Explanation:

 **Test case $1$:**  The best choice would be to choose the $1^{st}$ jar, so that $6$ of the cookies will be divided among her children (each child gets $2$) and only $1$ goes to waste.

 **Test case $2$:**  No matter which jar is chosen, it's impossible to give every child at least one cookie. So, the answer is $-1$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-13T11:23:48.925Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long minn=1e9;
        long long n,k,flag=0;
        cin>>n>>k;
        vector <long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=k) flag=1;
            minn=min(minn,a[i]%k);
        }if (flag) cout<<minn<<endl;
        else cout<<-1<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/ADVITIYA3)