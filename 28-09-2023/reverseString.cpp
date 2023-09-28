#include<iostream>
#include<cstring>
using namespace std;

void print_reverse(char* a,int n){
	// base case
	if(n==0){
		return;
	}

	// recursive case
	cout<< a[n-1];
	print_reverse(a,n-1);
}

int main(){
	char a[100];
	cin.getline(a,100);
	int n = strlen(a);
	print_reverse(a,n);
	return 0;
}