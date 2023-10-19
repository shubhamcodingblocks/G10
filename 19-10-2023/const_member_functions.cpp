#include<iostream>
#include<cstring>
using namespace std;

class Employee{
	int id;
	char name[100];
public:
	Employee(char* n,int i){
		strcpy(name,n);
		id = i;
	}
	void display() const{
		//id = 12; // will throw and error because we cannot change the value of data members
		// inside a constant member function.
		cout << id <<endl;
		cout<< name <<endl;
	}
	void display1(){
		id = 12; // able to change the values here because the function is not constant
		cout<< id <<endl;
		cout<< name <<endl;
	}
};

int main(){
	Employee e("abc",12);
	e.display1();
	e.display();
	return 0;
}