/*

Alice and Bob are playing the legendary game of Age of Empires. They are trying extremely hard to be strategic, and smart - but are failing to do so. They’re newbies at the game, and are just learning the parts of the game.

They don’t have an idea about the strength and weaknesses of various units in the game. So, they start creating random unites based on how good cool they look to them. But, that’s a terrible strategy in the battlefield of Age of Empires.

To play a fair game, both Alice and Bob generate the same number of units, N. We’re given two arrays representing the strength of the units of both of their armies. The first array represents Bob’s army, the second one represents Alice’s army.

Now, the fight begins. But, how does one come to know who wins? Simple way actually. Every soldier in either army starts going on a rampage, and starts killing every soldier of the opposite army, which has less strength. The army which destroys the other army wins the war, and wins the game between two newbies. If such a case is not possible, the result will thus be a TIE!

Help yourself to find the result of the game!

Input:

First line of input contains number of test cases T. Each test case contains three lines. First line contains a single integer N, number of soldiers in army of Bob and Alice. Second line contains N space separated integers which represent the strength of Bob's army similarly third line contains N space separated integers which represent the strength of Alice's army.

Output:

For each test case print the result.

Constraints:

1 ≤ T ≤ 5 
1 ≤ N ≤ 105
0 ≤ Ai,Bi ≤ 109

SAMPLE INPUT 
3
2
1 5
5 1
4
5 6 3 1
10 3 5 6
3
15 20 50
8 3 7

SAMPLE OUTPUT 
Tie
Alice
Bob
Time Limit:	5.0 sec(s) for each input file.
Memory Limit:	256 MB
Source Limit:	1024 KB
Marking Scheme:	Marks are awarded when all the testcases pass.
Allowed Languages:	C, C++, Clojure, C#, D, Erlang, F#, Go, Groovy, Haskell, Java, JavaScript(Rhino), JavaScript(Node.js), Lisp, Lisp (SBCL), Lua, Objective-C, OCaml, Octave, Pascal, Perl, PHP, Python, Python 3, R(RScript), Racket, Ruby, Rust, Scala, Swift, Visual Basic

Link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/warcakewalk/
*/


#include <iostream>

using namespace std;



int cmpfunc(const void * a, const void * b)
{
	return (*(int*)b - *(int*)a);
}

int main()
{

	int test;
	cin >> test;

	while (test--)
	{
		long Number;
		cin >> Number;

		long long *Alice = new long long[Number];
		long long *Bob = new long long[Number];

		long long Key1=0; //value
		bool Flag =0; //0 for Bob;1 for Alice

		long i = 0;

	
		for (i = 0; i < Number; i++)
		{
			cin >> Bob[i];
		}
		for (i = 0; i < Number; i++)
		{
			cin >> Alice[i];
		}
		qsort(Bob,Number,sizeof(long long),cmpfunc);
		qsort(Alice, Number, sizeof(long long), cmpfunc);

		if (Bob[0] > Alice[0]) {
			cout << "Bob" << endl;
		}
		else
		if (Alice[0] > Bob[0])
			{
			cout << "Alice" << endl;
		}
		else
		if (Alice[0] == Bob[0])
		{
			cout << "Tie"<<endl;
		}

	}

	getchar();
	

	return 0;
}



