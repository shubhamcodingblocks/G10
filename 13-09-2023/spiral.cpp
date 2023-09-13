#include<iostream>
using namespace std;

int main(){
	int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	cout<<"matrix: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	int sr = 0,er = 2,sc = 0, ec = 3;
	while(sr<=er and sc<=ec){
		// first-step: fix sr and iterate over columns
		for(int col=sc;col<=ec;col++){
			cout<<a[sr][col]<<" ";
		}
		// since we dont want to visit sr again we should increment it
		sr++;

		// second-step: fix ec and iterate over rows
		for(int row=sr;row<=er;row++){
			cout<<a[row][ec]<<" ";
		}
		// since we dont want to visit ec again we should increment it
		ec--;

		if(sr<er){
			// third-step: fix er and iterate over columns(reverse)
			for(int col=ec;col>=sc;col--){
				cout<<a[er][col]<<" ";
			}
			// since we dont want to visit er again we should decrement it
			er--;
		}

		if(sc<ec){
			// fourth-step: fix sc and iterate over rows(reverse)
			for(int row=er;row>=sr;row--){
				cout<<a[row][sc]<<" ";
			}
			// since we dont want to visit starting column again we should increment it
			sc++;
		}
	}
	return 0;
}