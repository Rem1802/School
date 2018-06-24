#include "std_lib_facilities.h"
#include "Complex.h"

Complex::Complex(double &r, double &i) { //Initialize values in main.ccp
real = r;
imag = i;
	//r = real;
	//i = imag;
}

void Complex::print() {
		cout << real << "+" << imag << "i" << endl << endl;
}

Complex Complex::operator+(const Complex &value) {
	Complex add; //add = object; real en imag are members.
	add.real = real + value.real;
	add.imag = imag + value.imag;
	return add;
}

Complex Complex::operator-(const Complex &value) {
	Complex sub;
	sub.real = real - value.real;
	sub.imag = imag - value.imag;
	return sub;
}

Complex Complex::operator*(const Complex &value) {
	Complex mult;
	mult.real = real * value.real;
	mult.imag = imag * value.imag;
	return mult;
}

double getReal(double real) {
	return real;
}

double getImag(double imag) {
	return imag;
}

//Complex::~Complex();
