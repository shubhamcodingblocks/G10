#include<iostream>
#include<cstring>
using namespace std;

class Employee{
private:
	int id;
	char name[100];
	static int ct;
public:
	Employee(){
		cout<< " constructor is called "<<endl;
	}
	void set(char *n,int i){
		ct++;
		strcpy(name,n);
		id = i;
	}
	int get_id(){
		return id;
	}
	char * get_name(){
		return name;
	}
	static int get_counter(){
		return ct;
	}
};

int Employee::ct = 100;

int main(){
	Employee e1;
	Employee e2;
	// char a[] = "abc";
	// char b[] = "def";
	// e1.set(a,123);
	// e2.set(b,234);
	// cout<< "name: "<<e1.get_name()<<" id: "<<e1.get_id()<<" count: "<<Employee::get_counter()<<endl;
	// cout<< "name: "<<e2.get_name()<<" id: "<<e2.get_id()<<" count: "<<e2.get_counter()<<endl;
	return 0;
}