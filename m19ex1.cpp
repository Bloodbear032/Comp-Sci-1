#include <iostream>
using namespace std;

//functions must be before main code is read from top to bottom.
// int is the return type value
// sum is the functions name
// int x, int y are the parameter (they must be individually declared.
// sum(int x, int y) is the function signature
// no symbols as variables
//"return" returns control to the program.

int computeSum(int x, int y) {
	int s = 0;
	for (int i = x; i <= y; i++)
		s += i;
	return s;
}
//the sum function creates 3 variables x, y, and s.
int main() {
	int a = computeSum(1, 10); // this replaces x with 1 and y with 10 and s will be replaced with the sumation.
	int b = computeSum(20, 37);// once the function is completed the previous values with be cleared and the new values will subsitute x, y, and s respectively.
	int c = computeSum(35, 49);// once all 3 are complete the sumation values will be printed out.
	cout << a << ", " << b << ", " << c << "." << endl;
}
// when calling a function, parameters can be any expression that yields the right data type.