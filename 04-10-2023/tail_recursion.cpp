#include<iostream>
using namespace std;

int fact(int n, int ans=1){
	if(n<=0){
		return ans;
	}
	return fact(n-1,ans*n);
}

int main(){
	int n = 5;
	cout<< fact(n) <<endl;
	return 0;
}