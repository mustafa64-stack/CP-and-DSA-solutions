# SAMESAME - Rating 946

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Nearly Equal

The  *Hamming distance*  between two pairs of strings of  **equal length**  is defined to be the number of positions at which they contain different characters.
For example, the Hamming distance between strings $\texttt{"there"}$ and $\texttt{"shire"}$ is $2$ (their first and third characters are different), while the Hamming distance between $\texttt{"order"}$ and $\texttt{"chaos"}$ is $5$, since they differ at every position.

Chef has a string $A$ of length $N$.
Chef's favorite string is $B$, which has length $M$. It is known that $M \leq N$.

Find the minimum Hamming distance between $B$ and some  **contiguous**  substring$^\dagger$ of $A$ that has length $M$.

$^\dagger$A substring of a string is obtained by deleting some (possibly, zero) characters from its beginning and some (possibly, zero) characters from its end.
For example, `"abc"`, `"bc"`, and `"cd"` are substrings of `"abcd"`, but `"ac"` is not.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of three lines of input. The first line of each test case contains two space-separated integers $N$ and $M$ — the lengths of strings $A$ and $B$, respectively. The second line contains the string $A$, consisting of $N$ lowercase English letters. The third line contains the string $B$, consisting of $M$ lowercase English letters.
### Output Format

For each test case, output on a new line the minimum possible Hamming distance between $B$ and some length $M$ substring of $A$.

### Constraints
- $1 \leq T \leq 100$
- $1 \leq M \leq N \leq 100$
- $A$ and $B$ contain only lowercase English letters, i.e, the characters 'a' through 'z'.
### Sample 1:
Input
Output

```
4
5 3
storm
orz
7 6
oranges
apples
4 1
ohno
p
9 4
pinotnoir
tari

```

```
1
4
1
2

```

### Explanation:

 **Test case $1$:**  Let's list out the substrings of $A$ of length $3$, and their Hamming distances to $B$:

- "sto" has Hamming distance $3$ to "orz".
- "tor" has Hamming distance $3$ to "orz".
- "orm" has Hamming distance $1$ to "orz", only the last characters differ.

The minimum Hamming distance is thus $1$.

 **Test case $2$:**  The substring `"ranges"` of $A$ has Hamming distance $4$ to $B$, which is the minimum possible.

 **Test case $3$:**  Every substring has Hamming distance $1$.

 **Test case $4$:**  The substring `"tnoi"` has Hamming distance $2$ to $B$, which is the best possible.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-11T12:03:08.189Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        string s,s1;
        cin>>s>>s1;
        int minn=101;
        int c=0;
        for(int i=0;i<=s.size()-s1.size();i++){
            c=0;
            for(int j=0;j<s1.size();j++){
                if(s1[j]!=s[i+j]){
                    c++;
                }
            }minn=min(c,minn);
        }cout<<minn<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SAMESAME)