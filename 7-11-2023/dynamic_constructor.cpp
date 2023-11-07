#include<iostream>
#include<cstring>
using namespace std;

class Car{
public:
	char * name;
	int * price;
	int * mileage;
	int * seats;

	Car(char * n,int p,int m,int s){ // dynamic constructor
		name = new char[strlen(n)+1];
		strcpy(name,n);
		price = new int(p);
		mileage = new int(m);
		seats = new int(s);
	}

	void display(){
		cout << "name: " << name <<endl;
		cout << "price: " << *price <<endl;
		cout << "mileage: " << *mileage <<endl;
		cout << "seats: " << *seats <<endl;
	}
};

int main(){
	char name[] = "BMW";
	Car C(name,100,10,2);
	C.display();
	return 0;
}