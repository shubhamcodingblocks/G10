#include<iostream>
using namespace std;

class Car{
	int engine;
	int price;
public:
	void set(int e,int p){
		engine = e;
		price = p;
	}
	int get_engine(){
		return engine;
	}
	int get_price(){
		return price;
	}
};

int main(){
	Car s1;
	s1.set(1100,100000000);
	cout<< "engine: "<<s1.get_engine()<<"  price: "<<s1.get_price()<<endl;	
	return 0;
}