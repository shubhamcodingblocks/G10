#include<iostream>
using namespace std;

class Complex{
private:
	int real;
	int imag;
public:
	Complex(int r,int i){
		real = r;
		imag = i;
	}
	void display(){
		cout<< real << " + " << imag <<" i"<<endl;
	}
	friend void addComplex(Complex,Complex);
	friend void multiplyComplex(Complex,Complex);
};

void addComplex(Complex c1,Complex c2){
	int new_real = c1.real+c2.real;
	int new_imag = c1.imag+c2.imag;
	Complex ans(new_real,new_imag);
	ans.display();
}

void multiplyComplex(Complex c1,Complex c2){
	int new_real = c1.real*c2.real - c1.imag*c2.imag;
	int new_imag = c1.real*c2.imag + c1.imag+c2.real;
	Complex ans(new_real,new_imag);
	ans.display();
}

int main(){
	Complex c1(1,2);
	Complex c2(2,3);
	addComplex(c1,c2);
	multiplyComplex(c1,c2);
	return 0;
}