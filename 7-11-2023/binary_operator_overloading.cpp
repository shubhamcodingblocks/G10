
#include<iostream>
using namespace std;

class Complex{
public:
	int real;
	int imag;

	Complex(int r,int i){
		real = r;
		imag = i;
	}

	Complex operator+(Complex X){
		int new_real = real + X.real;
		int new_imag = imag + X.imag;
		Complex ans = Complex(new_real,new_imag);
		return ans;
	}

	Complex operator-(Complex X){
		int new_real = real - X.real;
		int new_imag = imag - X.imag;
		Complex ans = Complex(new_real,new_imag);
		return ans;
		//return Complex(real-X.real,imag-X.imag);
	}

	Complex operator*(Complex X){
		int new_real = real * X.real - X.imag * imag;
		int new_imag = imag * X.real + X.imag * real;
		Complex ans = Complex(new_real,new_imag);
		return ans;
		//return Complex(X.real*real - X.imag*imag , X.real*imag + X.imag*real);
	}

	void display(){
		if(imag < 0){
			cout << real << " - i " << -imag << endl;
		}
		else{
			cout << real << " + i " << imag << endl;
		}
	}
};

int main(){
	Complex c1(1,2);
	Complex c2(2,3);
	Complex c3 = c1+c2;
	Complex c4 = c1.operator+(c2); // equivalent to previous lin
	c3.display();
	return 0;
}