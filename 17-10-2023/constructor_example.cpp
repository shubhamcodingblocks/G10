#include<iostream>
using namespace std;

class Employee{
protected:
	char name[100];
	int id;
	int age;
	static int ct;
public:
	Employee(char *n,int i,int a){
		ct++;
		strcpy(name,n);
		id = i;
		age = a;
	}
	void display(){
		cout<< "name: "<<name<<endl;
		cout<< "id: "<<id<<endl;
		cout<< "age: "<<age<<endl;
	}
	static int get_counter(){
		return ct;
	}
};

int Employee::ct;

int main(){
	Employee e("abc",1,2);
	e.display();
	cout<< e.get_counter() <<endl;
	cout<< Employee::get_counter() <<endl;
	return 0;
}