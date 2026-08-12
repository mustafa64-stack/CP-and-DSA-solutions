# P2_175 - Rating 954

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Technex Tickets

You are standing in a queue that is infinitely long, waiting to get tickets for various events during  **Technex**.
The ticket distribution follows these rules:

- Every second, tickets are given to the $1^{st}$ and $3^{rd}$ persons in the queue.
- After receiving their tickets, those people leave the queue.
- The person who was originally in the $2^{nd}$ position (before the $1^{st}$ and $3^{rd}$ people left) moves up to the $1^{st}$ position.
- This process repeats every second, with the $1^{st}$ and $3^{rd}$ persons receiving tickets and leaving.

Initially, you are at position $N$ in the queue.

Determine after how many seconds you will get the tickets.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case contains a single line of input $N$ your initial position in the line.
### Output Format

For each test case, output on a new line after how many seconds will you get the tickets.

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq N \leq 1000$
### Sample 1:
Input
Output

```
5
1
2
3
4
5

```

```
1
2
1
3
2
```

### Explanation:
- At $1^{st}$ second, person at position $1$ and position $3$ will get ticket.
- At $2^{nd}$ second, person at position $2$ and position $5$ will get ticket, as they are now at position $1$ and $3$.
- At $3^{rd}$ second, person at position $4$ and position $7$ will get ticket.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-12T12:26:43.310Z  

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
        if(n==1) cout<<1<<endl;
        else if(n%2==0) cout<<(n)/2+1<<endl;
        else cout<<(n-1)/2<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/P2_175)