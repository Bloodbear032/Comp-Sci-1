#include <iostream>
using namespace std;

void printChars(char what, int times) {
	for (int i = 0; i < times; i++)
		cout << what;
}

int main() {
	int userinput;

	//input validation
	do {
		cout << "Please enter a value to see diamonds: ";
		cin >> userinput;
	} while (userinput <= 0);

	//ascending 
	//it starts with 1 less leading space.
	int spaces = userinput - 1;
	//the lowest # of stars is 1
	int stars = 1;
	//standard accumilation for statement
	for (int i = 0; i < userinput; i++) {
	//printChar(left, right); the left substitutes what in the printChars function.
	//right tells the loop how many times to run until the row is complete.
		printChars(' ', spaces);
		printChars('*', stars);
		cout << endl;
	// every pass through the loop the # of leading spaces decreases by 1
		spaces--;
	//every pass through the loop the # of stars increases by 2
		stars += 2;
	}

	//descending
	// at the start of the decending loop the lowest number of spaces is 1.
	spaces = 1;
	//reduces the number of star from the ascending loop by 2 loops.
	stars -= 4;
	//standard accumilation for statement
	for (int j = 0; j < userinput; j++) {
		//printChar(left, right); the left substitutes what in the printChars function.
		//right tells the loop how many times to run until the row is complete.
		printChars(' ', spaces);
		printChars('*', stars);
		cout << endl;
		// every pass through the loop the # of leading spaces increases by 1
		spaces++;
		//every pass through the loop the # of stars decreases by 2
		stars -= 2;
	}
}
