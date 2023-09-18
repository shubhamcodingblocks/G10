// pointer_array.cpp
#include<iostream>
using namespace std;

int main(){
	int a[5] = {2,8,1,3,9};
	// cout<< *(a) <<endl;
	// cout<< *(a+1) <<endl;
	// cout<< *(a+2) <<endl;
	// cout<< *(a+3) <<endl;
	// cout<< *(a+4) <<endl;
	for(int i=0;i<=4;i++){
		cout<< *(a+i)<<endl;
	}	
	return 0;
}