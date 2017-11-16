#include <iostream>
using namespace std;

// this function is very basically make the "pow" function.

int power(int base, int exponent) {
	int product = 1;
	for (int i = 0; i < exponent; i++) {
		product *= base;
	}
	return product;
}

int main() {
	int base, exponent;

	cout << "Enter base: ";
	cin >> base;
	cout << "Enter exponent: ";
	cin >> exponent;

	int result = power(base, exponent);
	cout << result << endl;

}