// Problem 05:
//Input will contain four integers a,b,c,d one per line
//Return the greatest of the four integers.
// The code starts here:

#include <iostream>
using namespace std;

// Function returning the max between 4 integers
 int max(int a, int b , int c , int d)

 {
 	int out;
	if (a >  b && a > c && a > d)
	{
		out = a;
	}
	else if (b >  a && b > c && b > d)
	{
		out = b;
	}

	else if (c >  a && c > b && c > d)
	{
		out = c;
	}
    else
	{
		out = d;
	}	
return out;

}

// Main code 
int main ()
{
	int a, b, c, d;
	int result;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	
// Calling the function
    result = max (a, b, c, d);
    cout << result << endl;

}

