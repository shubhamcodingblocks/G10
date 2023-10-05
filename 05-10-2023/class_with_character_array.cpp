#include<iostream>
using namespace std;

class Student{
private:
	char name[100];
	int roll_no;
public:
	void set(char * ,int );
	int get_roll_no();
	char* get_name();
};

void Student::set(char* n,int r){
	strcpy(name,n);
	roll_no = r;
}

char* Student::get_name(){
	return name;
}

int Student::get_roll_no(){
	return roll_no;
}

int main(){
	Student s1;
	char b[100] = "shubham";
	s1.set(b,1234);
	cout<<"name: "<<s1.get_name()<<endl;
	cout<<"roll no: "<<s1.get_roll_no()<<endl;
	return 0;
}