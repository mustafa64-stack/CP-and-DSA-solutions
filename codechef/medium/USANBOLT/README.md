# USANBOLT

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Usain Bolt vs Tiger

Back in 2015, Usain Bolt announced that he'll be retiring after the 2017 World Championship. Though his final season did not end gloriously, we all know that he is a true legend and we witnessed his peak during 2008 - 2013.

Post retirement, Usain Bolt is still leading an adventurous life. He's exploring the unexplored parts of the globe. But sometimes he gets bored, and reads questions asked about him on Quora. One such question he read was, "Who would win a race between Usain Bolt and a tiger if the race is on a straight line track and the tiger is $distancetoBolt$ meters behind Bolt? The finishing point is $finish$ meters away from Bolt's starting position. The tiger starts with an initial speed of $0$ $meter/second$, and will accelerate itself with $tigerAccelaration$ $m/s^2$. Bolt can run with a constant speed of $boltSpeed$ $m/s$ from start to finish. Given these values, find out who will win the race - Bolt or the tiger?"

Note that Bolt will win the race if and only if he touches the finishing line before the tiger touches it. If both of them finish together, the tiger is announced as the winner since Bolt was given an initial advantage. See the figure below for more clarity.

Since Bolt was busy practicing in the tracks during his Physics school classes, he is asking for your help to solve the question. Can you please help him?

He just remembers two formulae from the class, and thinks that they will be useful to you:

- Displacement ($S$) = $ut + \frac{1}{2}at^2$ where $u$ is the initial velocity, $a$ is the acceleration, and $t$ is the time taken.
- Velocity = $\frac{Displacement}{Time}$
### Input Format
- The first line will contain $T$, the number of testcases. Then the description of each test case follow.
- Each test case contains 4 integers $finish$, $distancetoBolt$, $tigerAccelaration$, $boltSpeed$.
### Output Format

For each testcase, output in a single line, the word "Bolt" or "Tiger" without quotes, depending on whether Bolt wins or the tiger wins.

### Constraints
- $1 \leq T \leq 100000$
- $1 \leq finish \leq 10^5$
- $1 \leq distancetoBolt \leq 10^5$
- $1 \leq tigerAccelaration \leq 10^5$
- $1 \leq boltSpeed \leq 10^5$
### Sample 1:
Input
Output

```
2
10 100 10 10
100 10 5 10

```

```
Bolt
Tiger

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-13T07:32:40.013Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        double finish,distancrbolt,tial,bosp;
        cin>>finish>>distancrbolt>>tial>>bosp;
        if(finish/bosp>=sqrt((2.0*(distancrbolt+finish))/tial)) cout<<"Tiger";
        else cout<<"Bolt";
        cout<<"\n";
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/USANBOLT)