// pointer_to_pointer.cpp
#include<iostream>
using namespace std;

int main(){
	int a = 5;
	int * aptr = &a;
	int * * ptrtoaptr = &aptr;
	// cout<< a <<endl;
	// cout<<"address of a "<< aptr <<endl;
	// cout<<"address of aptr "<< &aptr <<endl;
	// cout<<"value of ptrtoaptr "<<ptrtoaptr<<endl;
	cout<< *((*(&(*(&ptrtoaptr))))) << endl;
	return 0;
}