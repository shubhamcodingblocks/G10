#include<iostream>
using namespace std;

class Car{
public:
	int price;
	int engine;
	void moving(){
		cout<<"car is moving..."<<endl;
	}
};

int main(){
	Car c1;
	c1.engine = 1100;
	c1.price = 1000000000;
	cout<< "car engine: "<<c1.engine<<" and price is: "<<c1.price<<endl;
	cout<<c1.moving();
	return 0;
}