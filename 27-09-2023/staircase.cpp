#include<iostream>
using namespace std;

int main(){
	int a[4][4] = {1,5,9,10,12,15,19,20,25,26,29,31,34,37,38,40};
	int n = 4,m = 4;
	int tar = 26;
	int row = 0, col = m-1;
	bool flag = false;
	while(col>=0 and row<n){
		if(a[row][col] == tar){
			cout<< "element found "<<endl;
			flag = true;
			break;
		}
		else if(a[row][col] > tar){
			col--;
		}
		else if(a[row][col] < tar){
			row++;
		}
	}
	if(flag==false){
		cout<< "element not found "<<endl;
	}
	return 0;
}