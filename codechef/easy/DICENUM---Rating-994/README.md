# DICENUM - Rating 994

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Dice Number

Alice and Bob are playing a game. Each player rolls a regular six faced dice $3$ times.
The score of a player is the  **maximum number**  that can be formed using the rolls.
The player with the highest score wins, and the game ends in a tie if both players have the same score.

Find the winner of the game or determine whether it is a tie.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case contains six space-separated integers $A_1$, $A_2$, $A_3$, $B_1$, $B_2$ and $B_3$ — the values Alice gets in her $3$ dice rolls, followed by the values which Bob gets in his $3$ dice rolls.
### Output Format

For each test case, output on a new line `Alice` if Alice wins, `Bob` if Bob wins and `Tie` in case of a tie.

Note that you may print each character in uppercase or lowercase. For example, the strings `tie`, `TIE`, `Tie`, and `tIe` are considered identical.

### Constraints
- $1 \leq T \leq 10^4$
- $1 \leq A_1, A_2, A_3, B_1, B_2, B_3 \leq 6$
### Sample 1:
Input
Output

```
3
3 2 5 6 1 1
4 4 5 5 4 4
6 6 6 6 6 1

```

```
Bob
Tie
Alice
```

### Explanation:

 **Test Case $1$:**  Alice's score is $532$ which is less than Bob's score $611$.

 **Test Case $2$:**  Alice's score is $544$ which is same as Bob's score $544$.

 **Test Case $3$:**  Alice's score is $666$ which is greater than as Bob's score $661$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-13T11:08:06.802Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        vector <int> a(3),b(3);
        int sa=0,sb=0;
        for(int i=0;i<3;i++){
            cin>>a[i];
        }for(int i=0;i<3;i++){
            cin>>b[i];
        }sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=2;i>=0;i--){
            sa=sa*10+a[i];
        }for(int i=2;i>=0;i--){
            sb=sb*10+b[i];
        }if(sa>sb) cout<<"alice"<<endl;
        else if(sb>sa) cout<<"bob"<<endl;
        else cout<<"tie"<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/DICENUM)