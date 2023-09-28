#include<iostream>
using namespace std;

int stairs(int n,int m){
	// base case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}

	// recursive case
	int ans = 0;
	for(int i=1;i<=m;i++){
		ans += stairs(n-i,m);
	}
	return ans;
}

int main(){
	int n,m;
	cin>>n>>m;
	cout<< stairs(n,m) <<endl;
	return 0;
}