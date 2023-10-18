#include<iostream>
using namespace std;

class Second; // forward declaration

class First{
	int val;
public:
	First(int v){
		val = v;
	}
	friend void addFirstSecond(First,Second);
};

class Second{
	int data;
public:
	Second(int d){
		data = d;
	}
	friend void addFirstSecond(First,Second);
};

void addFirstSecond(First f,Second s){
	cout<<"val + data = "<<f.val+s.data<<endl;
}

int main(){
	First f(5);
	Second s(4);
	addFirstSecond(f,s);
	return 0;
}