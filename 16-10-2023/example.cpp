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
	return 0;
}