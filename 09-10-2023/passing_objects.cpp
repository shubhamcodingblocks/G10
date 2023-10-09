#include<iostream>
using namespace std;

class Complex{
public:
	int real;
	int imag;
	void subtract(Complex c);
	void addition(Complex c);
	void multiply(Complex c);
};

void Complex::subtract(Complex c){
	int new_real = real - c.real;
	int new_imag = imag - c.imag;
	cout<< new_real <<" + i "<<new_imag<<endl;
}

void Complex::addition(Complex c){
	int new_real = real + c.real;
	int new_imag = imag + c.imag;
	cout<< new_real <<" + i "<<new_imag<<endl;
}

void Complex::multiply(Complex c){
	int new_real = real*c.real - imag*c.imag;
	int new_imag = real*c.imag + imag*c.real;
	cout<< new_real <<" + i "<<new_imag<<endl;
}

int main(){
	Complex n1,n2;
	n1.real = 10;
	n1.imag = 5;
	n2.real = 5;
	n2.imag = 2;
	n1.subtract(n2);
	n1.addition(n2);
	n1.multiply(n2);
	return 0;
}