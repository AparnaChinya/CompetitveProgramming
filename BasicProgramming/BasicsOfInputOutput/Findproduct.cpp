
/*
You have been given an array A
of size N consisting of positive integers. You need to find and print the product of all the number in this array Modulo 10^9+7
 
Input Format:
The first line contains a single integer N

denoting the size of the array. The next line contains N space separated integers denoting the elements of the array

Output Format:
Print a single integer denoting the product of all the elements of the array Modulo 
10
9
+
7
109+7
. 
Constraints:
1
≤
N
≤
10
3
1≤N≤103

1
≤
A
[
i
]
≤
10
3
1≤A[i]≤103

SAMPLE INPUT
5
1 2 3 4 5

SAMPLE OUTPUT
120


Ref: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/ 

*/
#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
	int Test;
	cin >> Test;
	int Prod;
	long answer = 1;
	while (Test--)
	{
		cin >> Prod;
		answer *= Prod;
		answer = answer % 1000000007;
	}

	cout << answer;
	getchar();
	return 0;
}
