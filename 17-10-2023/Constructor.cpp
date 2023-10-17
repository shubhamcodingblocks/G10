#include<iostream>
#include<cstring>
using namespace std;

class Student{
private:
	char name[100];
	int roll_no;
public:
	Student(char *n,int r){
		cout<< "constructor called "<<endl;
		strcpy(name,n);
		roll_no = r;
	}
	void display(){
		cout<<"name: "<<name<<endl;
		cout<<"roll no: "<<roll_no<<endl;
	}
};

int main(){
	char a[100] = "abc";
	Student s(a,123);	
	//s.set("abc",123);
	s.display();
	return 0;
}