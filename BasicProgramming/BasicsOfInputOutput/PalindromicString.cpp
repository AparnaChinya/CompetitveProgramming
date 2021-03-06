/*
You have been given a String S.
You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes). 
Input Format
The first and only line of input contains the String S.
The String shall consist of lowercase English alphabets only.
Output Format
Print the required answer on a single line. 
Constraints 
1≤|S|≤100

Note
String S consists of lowercase English Alphabets only. 

SAMPLE INPUT
aba

SAMPLE OUTPUT
YES

ref: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/

*/

#include <stdio.h>

#include <iostream>
#include <string.h>


using namespace std;
int main()
{
	char input[100];

	cin >> input;

	int x = strlen(input);

	bool flag=true;
	for (int j = 0; j < x; j++)
	{
		if (input[j] != input[x-j-1]) {
			flag = false;
			break;
		}
		
	}

	if (flag) cout << "YES";
	else
	{
		cout << "NO";
	} 

	getchar();
	return 0;
}