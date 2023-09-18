#include<iostream>
using namespace std;

void increment(int * a,int * b){
	*a = *a+1;
	*b = *b+1;
}

int main(){
	int a=1,b=2;
	cout<<"before: "<<endl;
	cout<<a<<" "<<b<<endl;
	increment(&a,&b);
	cout<<"after: "<<endl;
	cout<<a<<" "<<b<<endl;
	return 0;
}