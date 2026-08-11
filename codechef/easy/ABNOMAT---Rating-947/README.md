# ABNOMAT - Rating 947

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Non-matching Name

Alice and Bob invented a brand-new algorithm - but they can't decide what to name it!

Alice suggested the name $S_A$, and Bob suggested the name $S_B$. ($S_A$ and $S_B$ are both strings of lowercase English letters.)

However, Alice thinks Bob's naming sense is really bad - she'll only be happy if the name given to the algorithm is not close to $S_B$ at all.
More specifically, Alice will be happy if and only if the algorithm's name  **does not share any characters**  with $S_B$.

Similarly, Bob thinks Alice's naming sense is really bad, and will only be happy if the algorithm's name doesn't share any characters with $S_A$.

Is there a way to name the algorithm (using only lowercase English letters) so that  *both*  Alice and Bob are happy?

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of three lines of input. The first line of each test case contains two space-separated integers $N$ and $M$ — the length of $S_A$ and the length of $S_B$, respectively. The second line contains the string $S_A$. The third line contains the string $S_B$.
### Output Format

For each test case, output on a new line the answer: `"YES"` if a valid name exists for the algorithm, and `"NO"` otherwise.

Each letter of the output may be printed in either uppercase or lowercase, i.e, the strings `NO`, `No`, `nO`, and `no` will all be treated as equivalent.

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq N \leq 50$
- $1 \leq M \leq 50$
- $S_A$ and $S_B$ contain only lowercase English letters, i.e, the characters 'a' through 'z'.
### Sample 1:
Input
Output

```
3
8 7
dijkstra
blossom
24 19
fastquicklazypropagation
westmajixhoverboard
34 45
supercalifragilisticexpialidocious
pneumonoultramicroscopicsilicovolcanoconiosis

```

```
Yes
No
Yes

```

### Explanation:

 **Test case $1$:**  We have $S_A = \texttt{dijkstra}$ and $S_B = \texttt{blossom}$.
They can name the algorithm $\texttt{queen}$ for example - you may verify that it shares no characters with both $S_A$ and $S_B$.
Many other names are possible too - some examples are $\texttt{puff, yen, new}$.

 **Test case $2$:**  It can be shown that no matter what the algorithm is named, either Alice or Bob will be unhappy.

 **Test case $3$:**  One valid name for the algorithm is $\texttt{zzz}$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-11T13:06:55.490Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string sa,sb;
        cin>>sa>>sb;
        int count=0;
        bool v[26]={false};
        for(char c:sa) v[c-'a']=true;
        for(char c:sb) v[c-'a']=true;
        for(bool i:v){
            if(i==true) count++;
            
        }
        if(count<26) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/ABNOMAT)