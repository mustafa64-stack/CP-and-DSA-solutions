# BLITZ3_2 - Rating 998

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Chess Match

In a Chess match "a + b", each player has a clock which shows $a$ minutes at the start and whenever a player makes a move, $b$ seconds are added to this player's clock. Time on a player's clock decreases during that player's turns and remains unchanged during the other player's turns. If the time on some player's clock hits zero (but not only in this case), this player loses the game.

There's a 3 + 2 blitz chess match. After $N$ turns (i.e. $\left\lfloor \frac{N+1}{2} \right\rfloor$ moves made by white and $\left\lfloor \frac{N}{2} \right\rfloor$ moves made by black), the game ends and the clocks of the two players stop; they show that the players (white and black) have $A$ and $B$ seconds left respectively. Note that after the $N$-th turn, $b = 2$ seconds are still added to the clock of the player that made the last move and then the game ends.

Find the total duration of the game, i.e. the number of seconds that have elapsed from the start of the game until the end.

### Input
- The first line of the input contains a single integer $T$ denoting the number of test cases. The description of $T$ test cases follows.
- The first and only line of each test case contains three space-separated integers $N$, $A$ and $B$.
### Output

For each test case, print a single line containing one integer — the duration of the game.

### Constraints
- $1 \leq T \leq 10^5$
- $10 \leq N \leq 100$
- $0 \leq A \leq 180 + 2 \cdot \left\lfloor \frac{N+1}{2} \right\rfloor$
- $0 \leq B \leq 180 + 2 \cdot \left\lfloor \frac{N}{2} \right\rfloor$
- for $N$ odd, $A \geq 2$
- for $N$ even, $B \geq 2$
- there is at least one valid game consistent with the input
### Sample 1:
Input
Output

```
3
10 0 2
11 2 1
12 192 192
```

```
378
379
0
```

### Explanation:

 **Example case 1:**  The total time given to both clocks after $10$ turns is $2 \cdot (180 + 10) = 380$ seconds. The total time left at the end is $0 + 2 = 2$ seconds. The duration of the game is $380 - 2 = 378$ seconds.

 **Example case 3:**  The total time given to both clocks after $12$ turns is $2 \cdot (180 + 12) = 384$ seconds. The total time left at the end is $192 + 192 = 384$ seconds. The duration of the game is $384 - 384 = 0$ seconds.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-13T13:07:11.079Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        cout<<2*(180+n)-(a+b)<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/BLITZ3_2)