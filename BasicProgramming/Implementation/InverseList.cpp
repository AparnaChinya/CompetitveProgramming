/*

There are many ways to order a list of integers from 
1 to n. For example, if n=3, the list could be : 

[312].

But there is a special way to create another list from the given list of integers. In this list, position of integer 
i is the i−th number in the given list. So following this rule, the given list will be written as: 
[231]. This list is called inverse list. Now there exists some list whose inverse list is identical. For example, inverse list of 
[123] is same as given list. Given a list of integers you have to determine whether the list is inverse or not.

The input contains several test cases. The first line is the number of test cases t (1<=t<=100) . The first line of each test case contains an integer 
n(1<=n<=100000). Then a list of the integers 
1
1 to 
n
n follows in the next line.

SAMPLE INPUT 
2
3
3 1 2
3
1 2 3
SAMPLE OUTPUT 
not inverse
inverse
Time Limit:	2.0 sec(s) for all input files combined.
Memory Limit:	256 MB
Source Limit:	1024 KB
Marking Scheme:	Marks are awarded when all the testcases pass.
Allowed Languages:	C, C++, Clojure, C#, D, Erlang, F#, Go, Groovy, Haskell, Java, JavaScript(Rhino), JavaScript(Node.js), Lisp, Lisp (SBCL), Lua, Objective-C, OCaml, Octave, Pascal, Perl, PHP, Python, Python 3, R(RScript), Racket, Ruby, Rust, Scala, Swift, Visual Basic

Link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/inverse-list/	
*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int TestCase;
	cin >> TestCase;
	long Number;

	while (TestCase--)
	{
		bool flag = false;
		cin >> Number;

		long MyArray[100000];

		for (long i = 1; i<= Number; i++)
		{
			cin >> MyArray[i];
		}

		long InverseArray[100000];

		for (long j = 1; j<=Number; j++)
		{
			InverseArray[MyArray[j]] = j;
		}
		for (long j = 1; j<=Number; j++)
		{
			if (MyArray[j] != InverseArray[j])
			{
				flag = true;
				break;
			}

		}

		if (flag) cout << "not inverse" << endl;
		else
			cout << "inverse" << endl;
	}

	return 0;
}



