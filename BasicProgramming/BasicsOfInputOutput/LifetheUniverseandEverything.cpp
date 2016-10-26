/*

Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. 
More precisely... rewrite small numbers from input to output. Stop processing input after reading in the number 42. 
All numbers at input are integers of one or two digits.

SAMPLE INPUT 
1
2
88
42
99
SAMPLE OUTPUT 
1
2
88
Time Limit:	5.0 sec(s) for all input files combined.
Memory Limit:	256 MB
Source Limit:	1024 KB
Marking Scheme:	Marks are awarded when all the testcases pass.
Allowed Languages:	C, C++, Clojure, C#, D, Erlang, F#, Go, Groovy, Haskell, Java, JavaScript(Rhino), JavaScript(Node.js), Lisp, Lisp (SBCL), Lua, Objective-C, OCaml, Octave, Pascal, Perl, PHP, Python, Python 3, R(RScript), Racket, Ruby, Rust, Scala, Swift, Visual Basic

Link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/life-the-universe-and-everything/

*/
#include <iostream>
using namespace std;

int main()
{
	int Number;
	cin>>Number;
   while(Number!=42)
   {
   		if(Number!=42) { cout<<Number<<endl;}
   		cin >> Number;
   }
    return 0;
}
