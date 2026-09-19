# Shape and Reshape

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

[__shape__](http://docs.scipy.org/doc/numpy/reference/generated/numpy.ndarray.shape.html#numpy-ndarray-shape)

The *shape* tool gives a tuple of array dimensions and can be used to change the dimensions of an array.

<sub>__(a). Using *shape* to get array dimensions__</sub>

	import numpy
    
    my__1D_array = numpy.array([1, 2, 3, 4, 5])
    print my_1D_array.shape		#(5,) -> 1 row and 5 columns
    
    my__2D_array = numpy.array([[1, 2],[3, 4],[6,5]])
    print my_2D_array.shape		#(3, 2) -> 3 rows and 2 columns 
    
<sub>__(b). Using *shape* to change array dimensions__</sub>    

	import numpy
    
    change_array = numpy.array([1,2,3,4,5,6])
    change_array.shape = (3, 2)
    print change_array		
    
    #Output
	[[1 2]
 	[3 4]
 	[5 6]]
    
[__reshape__](http://docs.scipy.org/doc/numpy/reference/generated/numpy.reshape.html#numpy.reshape)

The *reshape* tool gives a new shape to an array without changing its data. It creates a new array and does not modify the original array itself. 

	import numpy
    
    my_array = numpy.array([1,2,3,4,5,6])
    print numpy.reshape(my_array,(3,2))
    
    #Output
	[[1 2]
 	[3 4]
 	[5 6]]
   
---

__Task__ 

You are given a space separated list of nine integers. Your task is to convert this list into a $3 $X$ 3$ *NumPy* array.

**Input Format**

A single line of input containing $9$ space separated integers.

**Constraints**

 

**Output Format**

Print the $3 $X$ 3$ *NumPy* array.

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-19T06:08:56.420Z  

```py
# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy as np
arr=np.array(list(map(int,input().split())))
arr=np.reshape(arr,(3,3))
print(arr)

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/np-shape-reshape/problem)