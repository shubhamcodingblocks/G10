#include<iostream>
using namespace std;

int fact(int n){
	// base case
	if(n==0){
		return 1;
	}

	// recursive case
	int cp = fact(n-1);
	int bd = cp * n;
	return bd;
}

int main(){
	int n = 5;
	cout<< fact(n) <<endl; // will give us the factorial of n
	return 0;
}