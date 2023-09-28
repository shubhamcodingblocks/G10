#include<iostream>
using namespace std;

int replace(int n){
	// base case
	if(n==0){
		return 0;
	}
	// recursive case
	int last_digit = n%10;
	if(last_digit==0){
		last_digit = 5;
	}
	return replace(n/10)*10 + last_digit;
}

int main(){
	int n = 1005;
	cout<< replace(n) <<endl;
	return 0;
}