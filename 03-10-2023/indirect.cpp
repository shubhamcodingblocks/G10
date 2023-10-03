#include<iostream>
using namespace std;

void B(int n);

void A(int n){
	if(n==0){
		return;
	}
	cout<< n <<endl;
	B(n-1);
}

void B(int n){
	if(n==0){
		return;
	}
	cout<< n <<endl;
	A(n-1);
}

int main(){
	int n = 10;
	A(n);
	return 0;
}
