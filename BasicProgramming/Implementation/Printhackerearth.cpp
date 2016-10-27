/*
As a beginner to the programming, Mishki came to Hackerearth platform, to become a better programmer. She solved some problems and felt very confident. 
Later being a fan of Hackerearth, she gave a problem to her friends to solve. They will be given a string containing only lower case characters (a-z), 
and they need to find that by using the characters of the given string, how many times they can print "hackerearth"(without quotes). As they are new to programming world, please help them.

Input:
The first line will consists of one integer N denoting the length of string. 
Next line will contain the string Str containing only lower case characters.

Output:
Print one integer, denoting the number of times her friends can print "hackerearth" (without quotes).

Constraints:

1≤N≤106
Each character of string 

Str will be in range [a,z]

SAMPLE INPUT 
13
aahkcreeatrha
SAMPLE OUTPUT 
1
Explanation
Here by using the characters of string, her friends can print "hackerearth" (without quotes) only 1 time.

Time Limit:	1.0 sec(s) for each input file.
Memory Limit:	256 MB
Source Limit:	1024 KB
Marking Scheme:	Marks are awarded when all the testcases pass.
Allowed Languages:	C, C++, Clojure, C#, D, Erlang, F#, Go, Groovy, Haskell, Java, JavaScript(Rhino), JavaScript(Node.js), Lisp, Lisp (SBCL), Lua, Objective-C, OCaml, Octave, Pascal, Perl, PHP, Python, Python 3, R(RScript), Racket, Ruby, Rust, Scala, Swift, Visual Basic
Link:https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/print-hackerearth/ 
*/

#include <iostream>
#include<string>
#include<math.h>
#include<map>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
	int num;
	cin >> num;

	string myString;
	cin >> myString;

	map<char, int> maps;

	for (int i = 0; i < myString.length(); i++)
	{
		maps[myString[i]]++;
	}

	int hackerEarth[][2] = { { 'h',2 },{ 'a',2 },{ 'c',1 },{ 'k',1 },{ 'e',2 },{ 'r',2 },{ 't',1 } };
	int count = INT_MAX;

	for (int i = 0; i < 7; i++)
	{
		count = min(count, maps[hackerEarth[i][0]] / hackerEarth[i][1]);

	}
	cout << count;

	return 0;
}
