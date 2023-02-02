# ALGORITHM AND DATA STRUCTURES LABORATORY

## TASK 3

### GENERAL INFORMATION

1. This project has been prepared for a course in informatics in the first semester.

2. Project is prepared in Visual Studio 2022 application in Windows 11 OS. It may not work as intended in other platforms.

3. Project only contains the code in github not the project folder prepared by Visual Studio.

### DESCRIPTION OF THE TASK

Euclid developed a simple and effective algorithm for determining the GCD (greatest common
divider).
For given two numbers a and b it consists in subtracting from the greater the lesser. When the numbers are
equal we get the GCD. max {a, b}: = max {a, b} -min {a, b} where max {a, b}, min {a, b} are
the largest and the smallest number from the set {a, b}, respectively.
This is best understood by examples:
a b max {a, b} -min {a, b}
24 6 24-6 = 18
18 6 18-6 = 12
12 6 12-6 = 6
6 6 PA = 6
a b max {a, b} -min {a, b}
3 10 10-3 = 7
3 7 7‐3 = 4
3 4 4-3 = 1
3 1 3‐1 = 2
2 1 2‐1 = 1
1 1 NWP = 1

Create a block diagram and then implement the Fibonacci sequence

The Fibonacci sequence is expressed by the recursive formula: f (n) = f (n-2) + f (n-1), when f (1) = 1 and f (2) = 1.
It is easy to calculate that:
f (3) = f (1) + f (2) = 1 + 1 = 2
f (4) = f (2) + f (3) = 1 + 2 = 3
f (5) = f (3) + f (4) = 2 + 3 = 5
