#ifndef _Complex
#define _Complex

class Complex {
private:
	//Attributes
	double real; //Real input
	double imag; //Imaginairy input

public:
	double r;
	double i;
	Complex(); //default constructor
	Complex(double &r, double &i); //Overload constructor

	//friend ostream& operator<<(ostream& os, const Complex& dt); //Friend function that let private vars used those values at other places.

	void print(); 

	Complex operator+(const Complex &add);
	Complex operator-(const Complex &sub);
	Complex operator*(const Complex &mult);

	double getReal(double);
	double getImag(double);
	//void setReal(double);
	//void setImag(double);

	~Complex(); //Destructor
#endif;
};
