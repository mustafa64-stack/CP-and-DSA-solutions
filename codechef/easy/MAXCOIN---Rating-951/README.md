# MAXCOIN - Rating 951

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Maximum Coins

Chef and Chefina are playing a series of $N$ games.
Each game has a winner. For the $i^{th} \ (1\le i \le N)$ game, the loser pays $2^i$ coins to the winner.

Find the  **maximum**  number of coins Chef can get if he wins exactly $X$ games.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two space-separated integers $N$ and $X$ — the total number of games and the number of games Chef wins, respectively.
### Output Format

For each test case, output on a new line, the  **maximum**  number of coins Chef can get if he wins exactly $X$ games.

### Constraints
- $1 \leq T \leq 55$
- $1 \leq X \leq N \leq 10$
### Sample 1:
Input
Output

```
3
2 1
2 2
4 1

```

```
2
6
2

```

### Explanation:

 **Test case $1$:**  Chef can win maximum coins if he loses the first game and wins the second game. Thus, Chef will pay $2^1=2$ coins for the first game and receive $2^2 = 4$ coins for the second game, leading to a total of $4-2=2$ coins.

 **Test case $2$:**  Chef wins both games and gets a total of $2+4=6$ coins.

 **Test case $3$:**  Chef will lose the first three games and win the last game. Thus, total coins he receives is $16-8-4-2=2$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-12T11:59:38.458Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        long long  s=0,r=0;
       
        for(int i=1;i<=n-x;i++){
            s+=1LL<<i;
        }
        for(int i=n;i>n-x;i--){
            r+=1LL<<i;
        }cout<<r-s<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/MAXCOIN)