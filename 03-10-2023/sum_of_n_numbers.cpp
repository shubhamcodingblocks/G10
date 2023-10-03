#include<iostream>
using namespace std;
int A(int);

int B(int n){
	if(n==0){
		return 0;
	}
	return n+A(n-1);
}

int A(int n){
	if(n==0){
		return 0;
	}
	return n+B(n-1); 
}

int main(){
	int n = 5;
	cout<< A(n) <<endl;
	return 0;
}