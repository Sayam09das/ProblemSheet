                                            Bit++ Program

This Python program simulates the execution of a sequence of statements written in a peculiar programming language called Bit++. The language uses one variable x that can be incremented or decremented with two operations: ++ and --.

Problem Description
In the Bit++ language:

The ++ operation increases the value of x by 1.
The -- operation decreases the value of x by 1.
The program starts with an initial value of x = 0. We are given a sequence of n statements, each containing either a ++ or -- operation applied to the variable x. The goal is to execute all the statements and determine the final value of x.

Input Format

The first line contains an integer n (1 ≤ n ≤ 150) — the number of statements in the program.
The next n lines each contain a statement, which consists of exactly one operation (++ or --) and the variable x (denoted as X).

Output Format

Output a single integer — the final value of x after executing all the statements.


Input are :
3
++x
x++
--x


Output:
1