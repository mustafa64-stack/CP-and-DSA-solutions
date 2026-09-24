# Seconds Converter 2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer total representing a duration in seconds. Your task is to convert it into hours, minutes and seconds, and print the three values separated by colons. For example, if total is 3725 seconds, the result is 1:2:5.

 **Input Format** 

A single line containing an integer total.

 **Constraints** 

0 ≤ total ≤ 10^9

 **Output Format** 

Print the equivalent time as H:M:S, separated by colons.

 **Sample Input 0** 

```
3725

```

 **Sample Output 0** 

```
1:2:5

```

 **Explanation 0** 

3725 seconds is 1 hour, 2 minutes and 5 seconds.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-24T14:50:14.690Z  

```c
#include <stdio.h>

int main() {
    long long total;
    scanf("%lld", &total);

    long long hours = total / 3600;
    total %= 3600;

    long long minutes = total / 60;
    long long seconds = total % 60;

    printf("%lld:%lld:%lld", hours, minutes, seconds);

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/seconds-converter-2/problem)