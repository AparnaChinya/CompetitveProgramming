/*

Bob and Khatu are brave soldiers in World War 3. They have spotted an enemy troop which is planting bombs. They sent message to the command centre containing characters W and B where W represents a wall and B represents a Bomb. They asked command to tell them how many walls will be destroyed if all bombs explode at once. One bomb can destroy 2 walls on both sides.

Input:

First line of input contains number of test cases T. Each test case contains a single string which contains two type of chars 'W' and 'B'.

Output:

For each test case print the total number of destroyed wall.

Constraints:

1 ≤ T ≤ 10
1 ≤ |S| ≤ 105

SAMPLE INPUT 
3
WBW
WWBWWBW
BWWWBWBWW
SAMPLE OUTPUT 
2
5
6
Time Limit:	5.0 sec(s) for each input file.
Memory Limit:	256 MB
Source Limit:	1024 KB
Marking Scheme:	Marks are awarded when all the testcases pass.
Allowed Languages:	C, C++, Clojure, C#, D, Erlang, F#, Go, Groovy, Haskell, Java, JavaScript(Rhino), JavaScript(Node.js), Lisp, Lisp (SBCL), Lua, Objective-C, OCaml, Octave, Pascal, Perl, PHP, Python, Python 3, R(RScript), Racket, Ruby, Rust, Scala, Swift, Visual Basic

Link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/bob-and-bombs-cake-walk/
*/

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 100000
int main()
{

	int test;
	cin >> test;
	
	while (test--)
	{
		long DestroyCount = 0;
		char input[100000] = {""};
		cin >> input;
		int i = 0;
		
		while (i<strlen(input))
		{
			if (input[i] == 'B')
			{
				if (input[i - 1] == 'W') { DestroyCount++; input[i - 1] = 'X'; }
				if (input[i - 2] == 'W') { DestroyCount++; input[i - 2] = 'X'; }

				if (input[i + 1] == 'W') { DestroyCount++; input[i + 1] = 'X'; }
				if (input[i + 2] == 'W') { DestroyCount++; input[i + 2] = 'X'; }
			}
			i++;
		}

		cout << DestroyCount << endl;

	}

	getchar();


	return 0;

}



