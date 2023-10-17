#include<iostream>
using namespace std;

class Employee{
private:
	char name[100];
	int id;
public:
	Employee(){
		cout << "constructor has been called "<<endl;
	}
	~Employee(){
		cout<< "destructor has been called "<<endl;
	}
};

int main(){
	if(true){
		Employee e;
	}
	cout<<"inside main "<<endl;
	return 0;
}