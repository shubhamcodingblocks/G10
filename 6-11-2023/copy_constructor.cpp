#include<iostream>
#include<cstring> 
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

	Car(Car &X){
		cout << "copy constructor called. "<<endl;
		name = new char[strlen(X.name)+1];
		strcpy(name,X.name);
		price = X.price;
		mileage = X.mileage;
		seats = X.seats;
	}

	void display(){
		cout << "name: " << name <<endl;
		cout << "price: " << price <<endl;
		cout << "mileage: " << mileage <<endl;
		cout << "seats: " <<seats <<endl;
		cout <<endl;
	}
};

int main(){
	char name[] = "BMW";
	Car D(name,100,10,4);
	Car C = D;
	Car E(D);
	E.name[0] = 'Z'; // reference: deep copy, shallow copy.
	D.display();
	C.display();
	E.display();
	return 0;
}