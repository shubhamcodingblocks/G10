#include<iostream>
using namespace std;

class Student{
public:
	char name[100];
	int roll_no;
	static int ct;
	void set(char *n,int r){
		ct ++;
		strcpy(name,n);
		roll_no = r;
	}
	int get_roll_no(){
		return roll_no;
	}
	char * get_name(){
		return name;
	}
	void display(){
		cout<<"name "<<name<<" roll-no: "<<roll_no<<endl;
	}
	static void print(){
		cout<< ct <<endl;
		cout<< "static member function called"<<endl;
	}
};

int Student::ct;

int main(){
	// Student s1,s2,s3;
	// int ct = 10;
	// char a[] = "abc";
	// s1.set(a,123);
	// s2.set("def",234);
	// s2.set("fhi",345);
	// s1.display();
	// s2.display();
	// s3.display();
	cout<< Student::ct <<endl;
	Student::print();
	return 0;
}