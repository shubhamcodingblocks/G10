#include<iostream>
using namespace std;

int main(){
	int a = 5;
	int * aptr = &a;
	cout<< a<<endl;
	cout<< &a<<endl;
	cout<< aptr<<endl;

	float f = 11.1;
	float * fptr = &f;
	cout<< f<<endl;
	cout<< &f<<endl;
	cout<< fptr<<endl;

	cout<<"size of aptr is : "<<sizeof(aptr)<<" and size of fptr is: "<<sizeof(fptr)<<endl;
	return 0;
}