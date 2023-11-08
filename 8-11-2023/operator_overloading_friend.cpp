#include<iostream>
using namespace std;

class Complex{
private:
	int real,imag;
public:
	Complex(int r,int i){
		real = r;
		imag = i;
	}

	void display(){
		cout << real << " + i " << imag << endl;
	}

	friend Complex operator+(Complex , Complex);
	friend Complex operator-(Complex , Complex);
	friend Complex operator*(Complex , Complex);
};	

Complex operator-(Complex X1, Complex X2){
	int new_real = X1.real - X2.real;
	int new_imag = X1.imag - X2.imag;
	return Complex(new_real,new_imag);
}

Complex operator*(Complex X1,Complex X2){
	int new_real = X1.real * X2.real - X1.imag * X2.imag;
	int new_imag = X1.real * X2.imag + X1.imag * X2.real;
	return Complex(new_real,new_imag);
}

Complex operator+(Complex X1, Complex X2){
	int new_real = X1.real + X2.real;
	int new_imag = X1.imag + X2.imag;
	return Complex(new_real,new_imag);
}

int main(){
	Complex c1(1,2);
	Complex c2(2,3);
	cout << "addition: " <<endl;
	Complex c3 = c1 + c2;
	c3.display();

	cout << "multiplication: " <<endl;
	c3 = c1 * c2;
	c3.display();

	cout << "subtraction: " <<endl;
	c3 = c1 - c2;
	c3.display();
	return 0;
}