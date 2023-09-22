#include<iostream>
using namespace std;

int first7(int *a,int i,int n){
	// base case
	if(i==n){
		return -1;
	}

	// recursive case
	if(a[i]==7){
		return i;
	}
	int cp = first7(a,i+1,n);
	return cp;
}

int main(){
	int a[] = {1,7,2,8,7,9};
	int n = sizeof(a)/sizeof(int);
	cout<< first7(a,0,n) <<endl;
	return 0;
}