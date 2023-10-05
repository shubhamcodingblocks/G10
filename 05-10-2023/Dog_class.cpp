#include<iostream>
using namespace std;

class Dog{
private:
	char species[100];
	char name[100];
	int age;
public:
	void set(char *,char *,int);
	int get_age();
	char* get_name();
	char* get_species();
};

void Dog::set(char* s,char* n,int a){
	strcpy(species,s);
	strcpy(name,n);
	age = a;
}

int Dog::get_age(){
	return age;
}

char* Dog::get_name(){
	return name;
}

char* Dog::get_species(){
	return species;
}

int main(){
	Dog d;
	char s[100] = "Pitbull";
	char name[100] = "abcd";
	d.set(s,name,1234);
	cout<<"age: "<<d.get_age()<<endl;
	cout<<"name: "<<d.get_name()<<endl;
	cout<<"species: "<<d.get_species()<<endl;
	return 0;
}