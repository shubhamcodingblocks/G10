#include<iostream>
using namespace std;

bool checksorted(int* a,int i,int n){
	// base case
	if(i==n-1 or i==n){
		return true;
	}

	// recursive case
	bool cp = checksorted(a,i+1,n);
	if(cp==true and a[i]<a[i+1]){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int a[] = {1,4,99,10,11};
	int n = sizeof(a)/sizeof(int);
	if(checksorted(a,0,n)==true){
		cout<< "array is sorted "<<endl;
	}
	else{
		cout<< "array is not sorted "<<endl;
	}
	return 0;
}