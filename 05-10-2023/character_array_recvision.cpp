#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char s[100];
	char b[100] = "abcdef";
	strcpy(s,b);
	cout<< s <<endl;
	return 0;
}