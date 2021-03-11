// Problem 03:
// Input consists of the following space-separated values: int, long, char, float, and double, respectively
// Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places
// The code starts here:

#include <iostream>
using namespace std;

int main()
{ 
unsigned int i;                         // using unsigned before int, long and char helps to keep the numbers intact
unsigned long long l;                  // using long double times helps to print really big number
unsigned char c;
float f;
double d;

cin >> i;
cin >> l;
cin >> c;
cin >> f;
cin >> d;

cout << i << endl;
cout << l << endl;
cout << c << endl;
cout.precision (3);                 // using percision helps to limit the number of decimals after the dot (.)
cout << fixed << f << endl;
cout.precision (9);
cout << fixed << d << endl;        // using fixed helps to keep the number intact while printing
return 0;
}


