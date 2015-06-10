# Evaluate-simple-RPN-expression


Evaluate an expression in Reverse Polish Notation (otherwise known as Postfix notation). Assume there are 4 numerical operators: + - * /, and numbers can be floating point values. Each token in the expression, be it a number of operator, is separated from its neighbours by one or more spaces, to make the expression easy to parse. The program should read a series of input strings from stdin and output either the evaluated number to 4 decimal places (use the %.4f print format), or the single word "ERROR". If the expression is not parseable, does not evaluate correctly, or leaves extra data on the stack, the output should be "ERROR". An example INPUT/OUTPUT sequence is given below for reference.
Input

A series of RPN expressions, one per line on stdin.
Output

 

One line for each output element - either the numerical output, or the string "ERROR"
Example

Input:
1 2 3 /
2 3 /
3 4 * /
1 2 4 + - 5 * 7 /

Output:
ERROR
0.6667
ERROR
-3.5714


