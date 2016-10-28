/*

Consider All lowercase Alphabets of the English language. Here we consider each alphabet from a to z to have a certain weight.
The weight of the alphabet a is considered to be 1, b to be 2, c to be 3 and so on until z has a weight of 26. 
In short, the weight of the alphabet a is 1, and the weight of all other alphabets is the weight of its previous alphabet + 1.

Now, you have been given a String S consisting of lowercase English characters. You need to find the summation of weight of each character in this String.

For example, Consider the String 

aba

Here, the first character 

a has a weight of 

1, the second character 

b has 

2 and the third character 

a again has a weight of 

1.
So the summation here is equal to : 
1+2+1=4

Input Format:
The first and only line of input contains the String 
S

Output Format 
Print the required answer on a single line

Constraints

1≤|S|≤1000

SAMPLE INPUT 
aba
SAMPLE OUTPUT 
4
Explanation
Explanation for the Sample has been given in the Problem Statement.

Time Limit:	1.0 sec(s) for each input file.
Memory Limit:	256 MB
Source Limit:	1024 KB
Marking Scheme:	Marks are awarded when all the testcases pass.
Allowed Languages:	C, C++, Clojure, C#, D, Erlang, F#, Go, Groovy, Haskell, Java, JavaScript(Rhino), JavaScript(Node.js), Lisp, Lisp (SBCL), Lua, Objective-C, OCaml, Octave, Pascal, Perl, PHP, Python, Python 3, R(RScript), Racket, Ruby, Rust, Scala, Swift, Visual Basic

Link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/string-sum/
*/

#include <iostream>
#include <stdio.h>
#include<string>
using namespace std;

int main()
{
	string myString;
	cin >> myString;
	
	int Sum=0;
	for (int i = 0; i < myString.length(); i++)
	{
		Sum += myString[i]-96;
	}
	
	cout << Sum;

	return 0;
}



