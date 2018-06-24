#include "std_lib_facilities.h"
#include "Complex.h"

int main() {
	double real1 = 0; //First real number.
	double imag1 = 0; //First imaginary.
	double real2 = 0; //Second real number.
	double imag2 = 0; //Second imaginary.
	char choice;

	cout << "Please enter a number for the first real part:";
	cin >> real1;
	cout << "\nPlease enter a number for the first imaginary number:";
	cin >> imag1;
	Complex complex1(real1, imag1);
	complex1.print();

	cout << "Please enter a number for the first real part:";
	cin >> real2;
	cout << "\nPlease enter a number for the first imaginary number:";
	cin >> imag2;
	Complex complex2(real2, imag2);
	complex2.print();

	cout << "\nPlease choose or you want to add (+), subtract (-) or multiply (*) the two answers by entering the right character:";
	cin >> choice;

	Complex add, sub, mult;
	if (choice == '+') {
		//add = complex1.operator+(complex2);
		cout << "\nResult for addition is: (" << add.r << ")+(" << add.i << ")i\n";
}

	else if (choice == '-') {
		//sub = complex1.operator-(complex2);
		cout << "\nResult for subtraction is: (" << sub.r << ")+(" << sub.i << ")i\n";
}
	else if (choice == '*') {
		//mult = complex1.operator*(complex2);
		cout << "\nResult for multiplication is: (" << mult.r << ")+(" << mult.i << ")i\n";
}

	keep_window_open();

	return 0;
}
