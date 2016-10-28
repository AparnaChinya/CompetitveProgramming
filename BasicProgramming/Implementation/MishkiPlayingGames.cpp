/*

Mishki loves playing games, so she asked her friend Hacker to join her in the Game of Stones. In this game, they have 
N sets of stones, numbered from 1 to N. Each set consists of Ai stones, where 1≤i≤N.
In each turn, player can select any of the set containing at least 
1 stone, and have to reduce it to half of the present number of stones , i.e
⌊
A
⌊Ai/ 2
⌋
⌋ (Integer Division) from it, and in case of single stone, he/she has to empty the set by removing it.
As the game is really interesting, both will play this game on 

Q days. On each day, they will some select sets of stones numbered from l to r, where 

1≤l≤r≤N and being a lover of the games, everyday Mishki will be the first player to take the turn.
The one who won't be able to play his/her turn in the game (i.e no stones left in teh selected set of stones), will loose the game. 
You need to tell the winner of the game on each day, if both the player will play optimally and take their turn alternatively. 

Note: 
1) Each day, before starting the game they will have the same number of stones in the set as given initially. 
2) Use fast i/o for large test files.

Input:
The first line will consists of 
2 integers 

N and Q denoting the number of sets of stones, and number of days respectively. 
Next line contains 
N space separated integers 
Ai, denoting the number of stones in each set.
Each line of next 
Q lines contains 
2 space separated inegers, 
l and r
denoting the range of sets used in the game on 
ith day.
Output:
Print 
Q
Q lines, each line containing the winner of the ith day.

Constraints:

1≤N,Q≤106
1≤A
i≤106 
1≤l≤r≤N

SAMPLE INPUT 
3 2
4 2 3
1 2
2 3
SAMPLE OUTPUT 
Mishki
Hacker
Explanation
Here N = 3, number of sets of stones and Q = 2 (number of days, the game will be played).
A1 = 4, A2 = 2 and A3 = 3. 
1) On First day:
Range of sets is from 1 to 2, i.e A1 and A2. First Mishki will take her turn and reduce A1 to A1/2, i.e to 2 stones in set A1.
Now A1 = 2 and Hacker will reduce it to A1/2, i.e to 1 stone in set A1.
Now Mishki will play and reduce it to 0, by removing remaining single stone from set A1.
As A1 is empty now, Hacker will reduce A2 to A2/2, i.e to 1 stone in set A2.
At last Mishki will remove the remaining single stone from set A2.
As all the sets are empty now, Hacker will not be able to take his turn, so Mishki will win the game.

Similarly, On second day, Hacker will win the game.

Time Limit:	1.0 sec(s) for each input file.
Memory Limit:	256 MB
Source Limit:	1024 KB
Marking Scheme:	Marks are awarded when all the testcases pass.
Allowed Languages:	C, C++, Clojure, C#, D, Erlang, F#, Go, Groovy, Haskell, Java, JavaScript(Rhino), JavaScript(Node.js), Lisp, Lisp (SBCL), Lua, Objective-C, OCaml, Octave, Pascal, Perl, PHP, Python, Python 3, R(RScript), Racket, Ruby, Rust, Scala, Swift, Visual Basic

Link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/mishki-playing-games/
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
	int StoneSet;
	int Days;

	scanf("%d%d",&StoneSet, &Days);
	long long *myArray = new long long[StoneSet];
	myArray[0] = 0;
	for (int i = 1; i <= StoneSet; i++)
	{
		scanf("%lld", &myArray[i]);
		long long temp = myArray[i];

		long long Count = 0;
		while (temp>0)
		{
			temp = (temp >> 1);
			Count++;
		}

		myArray[i] = Count + myArray[i - 1];

	}

	while (Days--)
	{
		int l, r;
	
		scanf("%d%d", &l, &r);
		long long result = myArray[r] - myArray[l - 1];

		if (result % 2 == 0)
			printf("Hacker\n");
		else
			printf("Mishki\n");
		

	}

	return 0;
}
