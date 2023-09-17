#include<iostream>
using namespace std;

int main(){
	int a = 5;
	float f = 6.1;
	int * aptr = &a;
	cout<< *aptr<<endl;
	cout<< *(&f)<<endl;
	return 0;
}