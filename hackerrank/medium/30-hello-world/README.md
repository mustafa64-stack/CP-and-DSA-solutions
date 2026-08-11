# Day 0: Hello, World.

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

**Objective**	
In this challenge, we review some basic concepts that will get you started with this series. You will need to use the same (or similar) syntax to read input and write output in challenges throughout HackerRank. Check out the [Tutorial](/challenges/30-hello-world/tutorial) tab for learning materials and an instructional video!		

**Task**	
To complete this challenge, you must save a line of input from stdin to a variable, print `Hello, World.` on a single line, and finally print the value of your variable on a second line.

You've got this!

**Note:** The instructions are Java-based, but we support submissions in many popular languages. You can switch languages using the drop-down menu above your editor, and the $inputString$ variable may be written differently depending on the best-practice conventions of your submission language.

**Input Format**

A single line of text denoting $inputString$ (the variable whose contents must be printed).

**Constraints**

 

**Output Format**

Print `Hello, World.` on the first line, and the contents of $inputString$ on the second line.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-11T09:10:04.153Z  

```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string c;
    getline(cin,c);
    cout<<"Hello, World.\n"<<c;
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/30-hello-world/problem)