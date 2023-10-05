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
	int n=3;
	Dog d[100];
	for(int i=0;i<n;i++){
		char s[100];
		char n[100];
		int a;
		cout<<"enter species , name and age for dog "<<i+1<<endl;
		cin>>s>>n>>a;
		d[i].set(s,n,a);
		cout<<d[i].get_age()<<" "<<d[i].get_name()<<" "<<d[i].get_species()<<endl;
	}
	cout<<d[0].get_age()<<endl;
	return 0;
}