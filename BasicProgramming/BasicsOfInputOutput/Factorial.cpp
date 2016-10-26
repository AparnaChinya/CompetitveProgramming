/*
You have been given a positive integer N. You need to find and print the Factorial of this number. The Factorial of a positive integer N refers to the product of all number in the range from 1 to N. 
You can read more about the factorial of a number here.

Input Format:
The first and only line of the input contains a single integer 
N denoting the number whose factorial you need to find.

Output Format
Output a single line denoting the factorial of the number 
N.

Constraints
1≤N≤10

SAMPLE INPUT 
2
SAMPLE OUTPUT 
2
Time Limit:	1.0 sec(s) for each input file.
Memory Limit:	256 MB
Source Limit:	1024 KB
Marking Scheme:	Marks are awarded when all the testcases pass.
Allowed Languages:	C, C++, Clojure, C#, D, Erlang, F#, Go, Groovy, Haskell, Java, JavaScript(Rhino), JavaScript(Node.js), Lisp, Lisp (SBCL), Lua, Objective-C, OCaml, Octave, Pascal, Perl, PHP, Python, Python 3, R(RScript), Racket, Ruby, Rust, Scala, Swift, Visual Basic

Link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/
*/
#include <iostream>
using namespace std;
int Fact(int n)
{
	if(n==0)return 1;
	else
	return n*Fact(n-1);
}
int main()
{
    int N;
    cin>>N;
    cout<<Fact(N);
    return 0;
}
