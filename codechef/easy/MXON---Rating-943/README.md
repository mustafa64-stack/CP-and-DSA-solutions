# MXON - Rating 943

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Maximum Ones

You are given a binary string $S$ of length $N$ consisting only of characters $0$ and $1$. You are allowed to perform at most $K$ operations on this string. In each operation, you can choose an index $i$ (where $0 \le i < N-1$) and update the character at position $i$ as follows:

$$ S_i = \max(S_i, S_{i+1}) $$

Here, the maximum is taken in the numerical sense, i.e., $'1'$ is considered greater than $'0'$. This operation essentially means that if $S_{i+1}$ is $'1'$, then $S_i$ becomes $'1'$ regardless of its previous value.

Your task is to determine the maximum possible number of $1$s in the string after performing at most $K$ such operations.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line of each test case contains two space-separated integers $N$ and $K$. The second line of each test case contains a binary string $S$ of length $N$, consisting of the characters $0$ and $1$.
### Output Format

For each test case, output on a new line the maximum number of $1$s that can be achieved in the string after performing at most $K$ operations.

### Constraints
- $1 \leq T \leq 10^5$
- $1 \leq N \leq 10$
- $0 \leq K \leq N$
- $S_i \in \{0, 1\}$
### Sample 1:
Input
Output

```
3
3 1
101
3 1
001
3 2
001

```

```
3
2
3

```

### Explanation:

 **Test Case 1:**  You can apply the operation at index $i = 1$ and the string changes to "111". Maximum possible ones = 3.
 **Test Case 2:**  You can apply the operation at index $i = 1$ and the string changes to "011". Maximum possible ones = 2.
 **Test Case 3:**  You can apply the operation at index $i = 1$ and the string changes to "011". The next operation will be applied at index $i = 0$ and the string changes to "111". Maximum possible ones = 3.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-11T11:33:15.476Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int c=0;
        string s;
        cin>>s;
        for(int i=s.size();i>=0;i--){
            if(k>0){
                if(s[i]=='1' &&s[i-1]=='0'){
                    s[i-1]='1';
                    k--;
                }
            }
        }for(int i=s.size();i>=0;i--){
            if(s[i]=='1'){
                c++;
            }
        }cout<<c<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/MXON)