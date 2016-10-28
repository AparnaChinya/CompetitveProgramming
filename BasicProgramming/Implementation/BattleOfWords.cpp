/*
Alice and Bob are fighting over who is a superior debater. However they wish to decide this in a dignified manner. So they decide to fight in the Battle of Words.

In each game both get to speak a sentence. Because this is a dignified battle, they do not fight physically, the alphabets in their words do so for them. Whenever an alphabet spoken by one finds a match (same alphabet) spoken by the other, they kill each other. These alphabets fight till the last man standing.

A person wins if he has some alphabets alive while the other does not have any alphabet left.

Alice is worried about the outcome of this fight. She wants your help to evaluate the result. So kindly tell her if she wins, loses or draws.

Input:

First line contains an integer T denoting the number of games played.
Each test case consists of two lines. First line of each test case contains a string spoken by Alice. 
Second line of each test case contains a string spoken by Bob.

Note:

Each sentence can have multiple words but the size of sentence shall not exceed 105.

Output:

For each game, output consists of one line each containing "You win some." if she wins ,"You lose some." if she loses or "You draw some." otherwise.

Constraints:

1 ≤ T ≤ 10
1≤ |A|,| B| ≤ 105
'a' ≤ alphabet ≤ 'z'
Each string contains atleast one alphabet.
Scoring:

Length of |A|,|B| in each test case does not exceed 104 : ( 30 pts )
Original Constraints : ( 70 pts )
SAMPLE INPUT 
3
i will win
will i
today or tomorrow
today or tomorrow and yesterday
i dare you
bad day
SAMPLE OUTPUT 
You win some.
You lose some.
You draw some.
Explanation
Case 1: Alice has "win" left at the end. So she wins. Case 2: Bob has "andyesterday" left at the end. So Alice loses. Case 3: Alice has "ireou" and Bob has "bda" left. So Draw.

Time Limit:	1.0 sec(s) for each input file.
Memory Limit:	256 MB
Source Limit:	1024 KB
Marking Scheme:	Marks are awarded when all the testcases pass.
Allowed Languages:	C, C++, Clojure, C#, D, Erlang, F#, Go, Groovy, Haskell, Java, JavaScript(Rhino), JavaScript(Node.js), Lisp, Lisp (SBCL), Lua, Objective-C, OCaml, Octave, Pascal, Perl, PHP, Python, Python 3, R(RScript), Racket, Ruby, Rust, Scala, Swift, Visual Basic

Link : https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/battle-of-words/
*/

#include <math.h>
#include<string>
#include <iostream>
#include<limits>
using namespace std;

int main()
{
	int tests;
	cin >> tests;

	cin.ignore (); 
	
	for(int i=0;i<tests;i++)
	{
		string alice = "", bob = "";
		long bitmap[26] = { 0 };
		
		getline(cin, alice);

		getline(cin, bob);


		long x = alice.length();
		long y = bob.length();

	
		int count = 0;
		for (long i = 0; i < alice.length(); i++)
		{
			if (alice[i] != 32)             // checking if the character in Alice is not a space
			{
				int xabc = alice[i] - 97;   // assigning the integer equivalent of character - eg: a= 1
				bitmap[xabc] = bitmap[xabc] + 1; // incrementing the count of alphabetr eg: 'a' by 1
			}
			if (alice[i] == 32)
			{
				count++;            // checking for space
			}

		}
		x = (x - count); //total count of the string of alice without spaces
		count = 0;
		for (long j = 0; j < bob.length(); j++)
		{
			int yabc = bob[j] - 97; // checking the character index of BOB

			if (bitmap[yabc] != 0)          // if count of index of character of bob is not 0
			{

				if (bob[j] != 32)       //and if it is not space
				{
					bitmap[yabc] = bitmap[yabc] - 1;    // decrement the count of index og Bob by 1
					x--; y--;                           // decrement the length of Alice and Bob string
				}


			}
			if (bob[j] == 32)       // count number of spaces in Bob string
			{
				count++;
			}

		}
		y = y - count;          // Now we have total string in Bob without characters which are unique
	
		if ((x > 0) && (y > 0))
		{
			cout << "You draw some." << endl;
		}
		else
			if ((x <= 0)&& (y <= 0))
		{
			cout << "You draw some." << endl;
		}
		
		else
			if (x <= 0)
			{
				cout << "You lose some." << endl;

			}
			else if (y <= 0)
			{
				cout << "You win some." << endl;

			}
	}



	return 0;
}
