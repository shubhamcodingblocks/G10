#include<iostream>
using namespace std;

int main(){
	int * a = new int;
	cin>> *a ;
	cout<< *a <<endl;
	delete a;
	a = NULL;
	return 0;
}