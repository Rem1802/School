/*
Namen: Edwin Lammers, Rico Lin, Remco Reiring
Klas: EMT1B groep 3
Opdracht: Complex Numbers, header file.
Samenwerking:
Inspiratie: zie bronvermelding main.
*/
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
	/*
	Complex(double r, double i) {
		r = real;
		i = imag;
		return r, i;
	}*/

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





//Methode
//void objects(Complex &complex);

//***Complex operator+(Complex &c); //Zegt dat ie bestaat. Initialized. -> Complex Complex::operator+() {<CODE>}
