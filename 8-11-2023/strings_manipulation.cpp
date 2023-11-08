#include<iostream>
#include<cstring>
using namespace std;

class strings{
	char * str;
public:
	strings(char * s){
		str = new char[strlen(s)+1];
		strcpy(str,s);
	}

	strings operator+(strings s){
		char * ans = new char[strlen(str)+1];
		strcpy(ans,str);
		strcat(ans,s.str);
		return strings(ans);
	}

	bool operator<(strings s){
		if(strcmp(str,s.str)<0){
			return true;
		}
		return false;
	}

	bool operator>(strings s){
		if(strcmp(str,s.str)>0){
			return true;
		}
		return false;
	}

	bool operator==(strings s){
		if(strcmp(str,s.str)==0){
			return true;
		}
		return false;
	}

	void display(){
		cout << str << endl;
	}
};

int main(){
	char temp[] = "abcd";
	char temp1[] = "defgh";
	strings s1(temp);
	strings s2(temp1);
	strings s3 = s1 + s2;
	s3.display() ;

	if(s1<s2){
		cout << "s1 is smaller than s2 " << endl;
	}
	else if(s1 > s2){
		cout << "s1 is gretater than s2 " << endl;
	}
	else{
		cout << "both strings are equal " << endl;
	}
	return 0;
}