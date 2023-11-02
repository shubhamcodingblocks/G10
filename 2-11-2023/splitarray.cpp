#include<iostream>
using namespace std;

int ct=0;
void subseq(int i,int j,int k,int *in,int *out,int *ignore,int n){
	// base case
	if(i==n){
		int sumtaken = 0;
		int sumignored = 0;
		for(int idx=0;idx<j;idx++){
			sumtaken+=out[idx];
		}
		for(int idx=0;idx<k;idx++){
			sumignored+=ignore[idx];
		}
		if(sumignored==sumtaken){
			for(int idx=0;idx<j;idx++){
				cout<<out[idx]<<" ";
			}
			cout<<"and ";
			for(int idx=0;idx<k;idx++){
				cout<<ignore[idx]<<" ";
			}
			cout<<endl;
			ct++;
		}
		return;
	}

	// recursive case
	out[j] = in[i];
	subseq(i+1,j+1,k,in,out,ignore,n);
	ignore[k] = in[i];
	subseq(i+1,j,k+1,in,out,ignore,n);
}

int main(){
	int in[1000],out[1000],ignore[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>in[i];
	}
	subseq(0,0,0,in,out,ignore,n);
	cout<<ct<<endl;
	return 0;
}