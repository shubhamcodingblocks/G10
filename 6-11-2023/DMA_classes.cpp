#include<iostream>
using namespace std;

class Car{
public:
	char * name;
	int price;
	int mileage;
	int seats;

	Car(){
		// cout << "default constructor called. " <<endl;
		name = NULL;
		price = 0;
		mileage = 0;
		seats = 0;
	}

	Car(char * n,int p){
		// cout << "constructor with 2 parameters called. " <<endl;
		name = new char[strlen(n)+1];
		strcpy(name,n);
		price = p;
		mileage = 0;
		seats = 0;
	}

	Car(char * n,int p,int m,int s){
		// cout << "parameterised constructor called " <<endl;
		name = new char[strlen(n)+1];
		strcpy(name,n);
		price = p;
		mileage = m;
		seats = s;
	}

	Car(Car &X){ // overidden deep copy constructor
		cout << "copy constructor called. "<<endl;
		name = new char[strlen(X.name)+1];
		strcpy(name,X.name);
		price = X.price;
		mileage = X.mileage;
		seats = X.seats;
	}

	// Car(Car &X){ // overidden shallow scopy constructor
	// 	name = X.name;
	// 	price = X.price;
	// 	mileage = X.mileage;
	// 	seats = X.seats;
	// }

	void display(){ 
		cout << "name: " << name <<endl;
		cout << "price: " << price <<endl;
		cout << "mileage: " << mileage <<endl;
		cout << "seats: " <<seats <<endl;
		cout <<endl;
	}

	~Car(){ // destructor
		cout << "destructor called. "<<endl;
		delete[] name;
		name = NULL;
	}
};

int main(){
	char name[] = "BMW";
	Car * C = new Car(name,100,20,2);
	(*C).display();
	C->display();
	delete C;
	C = NULL;
	return 0;
}