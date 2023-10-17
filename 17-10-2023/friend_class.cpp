#include<iostream>
using namespace std;

class Employee{
	char name[100];
	int id;
public:
	Employee(char *n,int i){
		id = i;
		strcpy(name,n);
	}
	friend class Printer;
};	

class Printer{
public:
	void printDetails(Employee e){
		cout<< e.name <<" "<< e.id <<endl;
	}
};

int main(){
	char a[100] = "abc";
	Employee e(a,123);
	Printer p;
	p.printDetails(e);
	return 0;
}