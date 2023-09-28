#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[100000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int tar;
	cin>>tar;
	int s = 0, e = n-1;
	int leftmost = -1;
	while(s<=e){
		int mid = (s+e)/2;
		if(a[mid]==tar){
			leftmost = mid;
			e = mid-1;
		}
		if(a[mid]<tar){
			s = mid+1;
		}
		else if(a[mid]>tar){
			e = mid-1;
		}
	}
	int rightmost = -1;
	s=0,e=n-1;
	while(s<=e){
		int mid = (s+e)/2;
		if(a[mid]==tar){
			rightmost = mid;
			s = mid+1;
		}
		if(a[mid]<tar){
			s = mid+1;
		}
		else if(a[mid]>tar){
			e = mid-1;
		}
	}
	cout<< leftmost <<" "<<rightmost<<endl;
	return 0;
}