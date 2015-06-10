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

# The Next Palindrome

A positive integer is called a palindrome if its representation in the decimal system is the same when read from left to right and from right to left. For a given positive integer K of not more than 1000000 digits, write the value of the smallest palindrome larger than K to output. Numbers are always displayed without leading zeros.
Input

The first line contains integer t, the number of test cases. Integers K are given in the next t lines.
Output

For each K, output the smallest palindrome larger than K.
Example

Input:
2
808
2133

Output:
818
2222


#Implement a Binary Search Tree

Implement a binary search tree and handle these operations.

    Insert: Inserts a number in the tree.
    Post Order Traversal: Does a post order traversal of the tree.
    Pre Order Traversal: Does a pre order traversal of the tree.

Input

The input contains a set of lines each specifying an operation - insert, print_pre, print_post.

 

Output

The output should print the preoder traversal or the post order traversal whenever asked in the input. The insert input need not print anything.
Example

Input:
insert 7438

insert 6052

insert 8132

print_pre

insert 8873

print_post

Output:

7438

6052

8132

6052

8873

8132

7438


#Binary Search Tree Sort

Create a binary search tree from the given values and print the values in sorted order.

 
Input

Each line contains the number in the form of insert <num>. You need to print the sorted values when you encounter print_sort.

Values can be <b>repeated.</b>

 

Output

Output when you encounter print_sort. Print the whole floating point number as stored.

Example

Input:
insert 4.3

insert 3.2

insert 4.1

print_sort
Output:

3.2

4.1

4.3


#Easy Dijkstra Problem



Determine the shortest path between the specified vertices in the graph given in the input data.
Hint: You can use Dijkstra's algorithm.
Hint 2: if you're a lazy C++ programmer, you can use set and cin/cout (with sync_with_stdio(0)) - it should suffice.

Input

first line - one integer - number of test cases
For each test case the numbers V, K (number of vertices, number of edges) are given,
Then K lines follow, each containing the following numbers separated by a single space:
ai, bi, ci
It means that the graph being described contains an edge from ai to bi,
with a weight of ci.
Below the graph description a line containing a pair of integers A, B is present.
The goal is to find the shortest path from vertex A to vertex B.
All numbers in the input data are integers in the range 0..10000.
Output

For each test case your program should output (in a separate line) a single number C - the length of the shortest path from vertex A to vertex B. In case there is no such path, your program should output a single word "NO" (without quotes)
Example

Input:
3
3 2
1 2 5
2 3 7
1 3
3 3
1 2 4
1 3 7
2 3 1
1 3
3 1
1 2 4
1 3

Output:
12
5
NO


#Highways


A number of cities are connected by a network of highways. Each highway is bidirectional and connects two cities, with a given travel time. What is the shortest time to get from a given city to another given city?
Input

The first line of input contains the number of test cases.

Each test case starts with a line containing the number of cities n (2 ≤ n ≤ 100000), the number of highways m (1 ≤ m ≤ 100000), the starting city and the ending city. Cities are numbered from 1 to n.

Then m lines follow, each describing one highway. The decription consists of the two distinct city numbers and the time in minutes to travel along the highway. The time will be between 1 and 1000.
Output

For each test case output a single line containing the minimum time it takes to get from the start to the destination. If no connection exists, output NONE.
Example

Input:
2
4 2 1 4
1 2 5
3 4 5
4 4 1 4
1 2 5
2 3 5
3 4 5
4 2 6


Output:
NONE
11


#Charly and Nito



Charly and Nito are friends and they like to be together at a nice bar in Palermo Hollywood.
About at 3 a.m. they start to feel sleepy and want to go home. They want to get home quickly
so each of them uses a path that minimizes the distance to his home. However, Charly and
Nito also like to walk together while they talk about the “good old times”, so they want to
walk together as much as possible.
Charly and Nito live in a city that can be modeled as a set of streets and junctions. Each
street connects a pair of distinct junctions and can be walked in both directions. No two streets
connect the same pair of junctions. Charly and Nito do not live together, and they do not live
at the bar. There is at least one path from the bar to Charly’s home; the same occurs with
Nito’s home.
Given information about the streets and junctions in the city, the locations of the bar, Charly’s
home and Nito’s home, you must tell Charly and Nito the maximum distance that they can
walk together without forcing them to walk more than the minimum distance from the bar to
their respective homes. Charly and Nito also want to know how much each of them will walk
alone.
Input

The input contains several test cases, each one described in several lines. The first line of
each test case contains five integers J, B, C, N and S separated by single spaces. The value
J is the number of junctions in the city (3 ≤ J ≤ 5000); each junction is identified by an
integer number between 1 and J. The values B, C and N are the identifiers of the junctions
where the bar, Charly’s home and Nito’s home are located, respectively (1 ≤ B, C, N ≤ J);
these three junction identifiers are different. The value S is the number of streets in the city
(2 ≤ S ≤ 150000). Each of the next S lines contains the description of a street. Each street
is described using three integers E1 , E2 and L separated by single spaces, where E1 and E2
identify two distinct junctions that are endpoints of the street (1 ≤ E1 , E2 ≤ J), and L is the
length of the street (1 ≤ L ≤ 104 ). You may assume that each street has a different pair of
endpoints, and that there exist paths from junction B to junctions C and N . The last line
of the input contains the number −1 five times separated by single spaces and should not be
processed as a test case.
Output

For each test case output a single line with three integers T , C and N separated by single
spaces, where T is the maximum distance that Charly and Nito can walk together, C is the
distance that Charly walks alone, and N is the distance that Nito walks alone.
Example

Input:
5 3 2 1 6
3 4 10
4 5 10
5 1 3
5 2 4
1 3 23
2 3 24
8 1 7 8 8
1 2 1
2 4 1
2 3 1
4 5 1
3 5 1
5 6 1
6 8 1
6 7 1
-1 -1 -1 -1 -1

Output:

20 4 3
4 1 1

#Finding Bridge
You are visiting a country consisting of two islands. Each island has a large number (> 2 for sure) of cities and connecting roads, such that every city on an island can be reached from any other city on the same island through more than one route. There is exactly one bridge connecting a particular city on island 1 with a corresponding city on island 2. However, instead of a map, you are only given a list of city names and roads connecting them. How will you identify the bridge?

 

 
Input

 

The first line starts with a line containing the number of cities n (2 ≤ n ≤ 100000), the number of highways m (1 ≤ m ≤ 100000). Cities are numbered from 0 to n - 1.

Then m lines follow, each describing one highway. The decription consists of the two distinct city numbers.

 
Output

Output a single line containing the bridge. Make sure the edge is printed with the lesser number first followed by the bigger number.
Example

Input:

6 7
0 1
3 4
1 2
2 3
2 0
4 5
5 3

Output:
2 3 

Explanation : 

In the above graph, 0, 1, 2 are cities in one island and 3, 4, 5 are cities in the other island. 2, 3 is the edge that represents the

bridge.

#Final exam
#Island Capitals

Problem statement

While visiting Lakshadweep, you get to know that every island in the place has not just many towns and villages, but also a capital.  Now these are relatively small islands without much infrastructure, so everyone gets around by walking on roads, and everyone in the country walks at exactly the same speed.  Also, people there value their time (they do have many assignments to take care of, after all), so when traveling from one town to another, they always go by the route that will get them there in the least time.  

Since everyone needs to go to the capital once in a while, the capital is defined as the town that, on average, can be reached in the least amount of time from every other town.  If more than one town satisfies this condition, then the town with the first name in alphabetical order is declared the capital of that island.

However, instead of a map, you are just given a list of roads joining towns, and the lengths of these roads.  To make it worse, you don't know how many islands are there either, or which towns are on which island. 

Your job now is to use this information to find all the capitals.

 

Input:

For each test case, you are given a list of roads, one per row. The first line has two numbers - the first number is the total number of towns, and the second is the total number of roads.

Each row after the first has two names: one for the starting town, one for the ending town, and a number that gives the distance between the towns. The names of towns are all in lower case letters, with no letters or special characters, and can be up to 20 characters long.  The distance between the towns is an integer (0 < d < 1000) (may be kilometers, but do you really care?). 

Also, unlike the inaptly named Lakshadweep that actually has only 36 islands, 10 of which are inhabited, you may actually find yourself in a place with up to a 1000 islands, each of which may have up to a 1000 towns in it.  

Output:

Print out the names of the capital towns, in alphabetical order.

 

Example

For example, if this were in some other part of the world, you might find the following list of roads -

Input:

9 8
sainteanne fortdefrance 12
bassepointe latrinite 5
bridgetown jackmans 10
fortdefrance ducos 4
holetown bridgetown 12
shanty bridgetown 25
fortdefrance bassepointe 15
jackmans shanty 26

Output:

bridgetown
fortdefrance

 
