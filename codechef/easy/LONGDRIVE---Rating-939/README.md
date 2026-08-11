# LONGDRIVE - Rating 939

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Long Drive

Chef and Chefina are out on a long road trip.
The average speed of the car after $10$ hours of driving is $X$ kilometres per hour.

Chef wants to achieve an average speed of $Y$ kilometres per hour. Given that he can travel a maximum of $100$ kilometres in one hour, find the  **minimum**  number of additional  **integer**  hours required for him to reach the target average speed.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two space-separated integers $X$ and $Y$ — the average speed after $10$ hours of driving and the required average speed.
### Output Format

For each test case, output on a new line, the  **minimum**  number of integer hours required for him to reach the target average speed.

### Constraints
- $1 \leq T \leq 1225$
- $50 \leq X \lt Y \lt 100$
### Sample 1:
Input
Output

```
3
50 51
60 80
55 95

```

```
1
10
80

```

### Explanation:

 **Test case $1$:**  The average speed after $10$ hours is $50$ kmph. This means that Chef has travelled a distance of $50\cdot 10 = 500$ kilometres. If he covers $61$ kilometres in the next hour, his average speed would be $\frac{(500+61)}{(10+1)} = 51$. Thus, he can achieve the target average speed in one hour.

 **Test case $2$:**  The average speed after $10$ hours is $60$ kmph. This means that Chef has travelled a distance of $60\cdot 10 = 600$ kilometres. If he covers $100$ kilometres each for the next $10$ hours, his average speed would be $\frac{(600+100\cdot10)}{(10+10)} = 80$. Thus, he can achieve the target average speed in minimum of $10$ hours.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-11T10:35:12.117Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        double x,y;
        cin>>x>>y;
        cout<<ceil((10*y-10*x)/(100-y))<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LONGDRIVE)