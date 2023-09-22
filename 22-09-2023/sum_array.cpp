#include<iostream>
using namespace std;

int sum(int *a,int i,int n){
	// base case
	if(i==n){
		return 0;
	}

	// recursive case
	int cp = sum(a,i+1,n);
	int bp = cp+a[i];
	return bp;
}

int main(){
	int a[] = {1,2,3,4,5};
	int n = sizeof(a)/sizeof(int);
	cout<< sum(a,0,n) <<endl;
	return 0;
}