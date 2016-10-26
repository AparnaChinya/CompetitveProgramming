/*
Roy wants to change his profile picture on Facebook. Now Facebook has some restriction over the dimension of picture that we can upload.
Minimum dimension of the picture can be L x L, where L is the length of the side of square.

Now Roy has N photos of various dimensions.
Dimension of a photo is denoted as W x H 
where W - width of the photo and H - Height of the photo

When any photo is uploaded following events may occur:

[1] If any of the width or height is less than L, user is prompted to upload another one. Print "UPLOAD ANOTHER" in this case.
[2] If width and height, both are large enough and 
(a) if the photo is already square then it is accepted. Print "ACCEPTED" in this case.
(b) else user is prompted to crop it. Print "CROP IT" in this case.

(quotes are only for clarification)

Given L, N, W and H as input, print appropriate text as output.

Input:
First line contains L.
Second line contains N, number of photos.
Following N lines each contains two space separated integers W and H.

Output:
Print appropriate text for each photo in a new line.

Constraints:
1 <= L,W,H <= 10000
1 <= N <= 1000

SAMPLE INPUT 
180
3
640 480
120 300
180 180
SAMPLE OUTPUT 
CROP IT
UPLOAD ANOTHER
ACCEPTED
Time Limit:	1.0 sec(s) for each input file.
Memory Limit:	256 MB
Source Limit:	1024 KB
Marking Scheme:	Marks are awarded when all the testcases pass.
Allowed Languages:	C, C++, Clojure, C#, D, Erlang, F#, Go, Groovy, Haskell, Java, JavaScript(Rhino), JavaScript(Node.js), Lisp, Lisp (SBCL), Lua, Objective-C, OCaml, Octave, Pascal, Perl, PHP, Python, Python 3, R(RScript), Racket, Ruby, Rust, Scala, Swift, Visual Basic

Link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/
*/


#include <iostream>
using namespace std;

int main()
{
	int L;
	cin >> L;

	int Photos;
	cin >> Photos;

	int Width;
	int Height;

	while (Photos--)
	{
		cin >> Width >> Height;

		if (Width == Height && Width>=L) {
			cout << "ACCEPTED" << endl;
		}
		else
	
		if (Width >= L && Height >= L)
		{
					cout << "CROP IT"<<endl;
		}
		else
	
		if (Width <= L || Height <= L)
		{
			cout << "UPLOAD ANOTHER" << endl;

		}

	}


	return 0;
}