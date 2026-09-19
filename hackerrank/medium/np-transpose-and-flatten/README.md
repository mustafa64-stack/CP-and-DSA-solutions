# Transpose and Flatten

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

[__Transpose__](http://docs.scipy.org/doc/numpy/reference/generated/numpy.transpose.html#numpy-transpose)  

We can generate the transposition of an array using the tool `numpy.transpose`.   
It will not affect the original array, but it will create a new array.

	import numpy

    my_array = numpy.array([[1,2,3],
                            [4,5,6]])
    print numpy.transpose(my_array)
    
    #Output
    [[1 4]
     [2 5]
     [3 6]]
     
[__Flatten__](http://docs.scipy.org/doc/numpy/reference/generated/numpy.ndarray.flatten.html)

The tool *flatten* creates a copy of the input array flattened to one dimension.

	import numpy

    my_array = numpy.array([[1,2,3],
                            [4,5,6]])
    print my_array.flatten()
    
    #Output
    [1 2 3 4 5 6]

---
__Task__  

You are given a $N $X$ M$ integer array matrix with space separated elements ($N$ = rows and $M$ = columns).  
Your task is to print the *transpose* and *flatten* results.

**Input Format**

The first line contains the space separated values of $N$ and $M$.  
The next $N$ lines contains the space separated elements of $M$ columns.

**Output Format**

First, print the *transpose* array and then print the *flatten*.

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-19T05:45:51.527Z  

```py
# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy as np
n,m=map(int,input().strip().split(' '))
arr=np.array([[int(i) for i in input().split(' ')]for j in range(n)])
print(np.transpose(arr))
print(arr.flatten())

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/np-transpose-and-flatten/problem)