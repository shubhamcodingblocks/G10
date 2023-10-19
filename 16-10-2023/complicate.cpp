#include<iostream>
using namespace std;

void print_odd(int n){
	// base case
	if(n==0){
		return;
	}
	// recursive case
	if(n&1){
		cout<<n;
	}
	print_odd(n-1);
}

int main(){
	int n = 10;
	print(n);
	return 0;
}