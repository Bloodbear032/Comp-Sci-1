#include <iostream>
using namespace std;

//function void is not a data type its the absence of data. 
// within a single function in C++ you can not have a function that is a data type and a void at the same time.
// you must choose one or the other. You can have two fucntions one handling one and one handling the other.
// When you choose you should have clear reason on why, a function is void or not.

// this function will take a number and store a letter grade as a variable.
char getlettergrade(double grade) {
	char letter;
	if (grade >= 90) {
		letter = 'A';
	}
	else if (grade >= 80) {
		letter = 'B';
	}
	else if (grade >= 70) {
		letter = 'C';
	}
	else if (grade >= 60) {
		letter = 'D';
	}
	else {
		letter = 'F';
	}
	return letter;
}

int main() {
	double usergrade;
	double sum = 0;
	int count = 0;
	char letter;
		do {
			cout << "Enter -1 to entering grades and recieve average."<< endl;
			cout << "Please enter a grade value from 0-100: ";
			cin >> usergrade;
			if (usergrade >= 0 && usergrade <= 100) {
				sum += usergrade;
				count++;
				letter = getlettergrade(usergrade);
				cout << "Your grade is a " << letter <<endl;
			}
		} while (usergrade != -1);

		double average = sum / count;
		letter = getlettergrade(average);
		cout << "Your average is " << average << ", which is a " << letter << endl;
}