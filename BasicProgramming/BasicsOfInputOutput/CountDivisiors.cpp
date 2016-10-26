/*

You have been given 3 integers l,r and k. Find how many numbers between l and r (both inclusive) are divisible by k.
You do not need to print these numbers, you just have to find their count.

Input Format
The first and only line of input contains 3 space separated integers 
l,r and k.

Output Format
Print the required answer on a single line.

Constraints
1 ≤ l ≤r ≤ 1000
1≤k≤1000

SAMPLE INPUT 
1 10 1
SAMPLE OUTPUT 
10
Time Limit:	1.0 sec(s) for each input file.
Memory Limit:	256 MB
Source Limit:	1024 KB
Marking Scheme:	Marks are awarded when all the testcases pass.
Allowed Languages:	C, C++, Clojure, C#, D, Erlang, F#, Go, Groovy, Haskell, Java, JavaScript(Rhino), JavaScript(Node.js), Lisp, Lisp (SBCL), Lua, Objective-C, OCaml, Octave, Pascal, Perl, PHP, Python, Python 3, R(RScript), Racket, Ruby, Rust, Scala, Swift, Visual Basic

Link:  https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/

*/



#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
	int l, r, k;
	cin >> l >> r >> k;

	int count = 0;

	for (int i = l; i <= r; i++)
	{
		if ((i%k) == 0) { count++; }
	}

	cout << count;
	getchar();
	return 0;
}