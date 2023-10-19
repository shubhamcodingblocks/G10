#include<iostream>
#include<cstring>
using namespace std;

class Employee{
public:
	int id;
	char name[100];
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
	void display1() {
		// id = 12; // able to change the values here because the function is not constant
		cout<< id <<endl;
		cout<< name <<endl;
	}
};

int main(){
	char a[100] = "abc";
	const Employee e(a,12);
	//e.id  = 13;
	e.display();
	e.display1();
	return 0;
}