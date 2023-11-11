#include<iostream>
#include<cstring>
using namespace std;

class strings{
private:
	char * str;
public:
	strings(char * s){
		str = new char[strlen(s)+1];
		strcpy(str,s);
	}

	void display(){
		cout << str << endl;
	}

	friend strings operator+(strings,strings);
	friend bool operator<(strings,strings);
	friend bool operator>(strings,strings);
	friend bool operator==(strings,strings);
};

strings operator+(strings s1,strings s2){
	char * ans = new char[strlen(s1.str)+1];
	strcpy(ans,s1.str);
	strcat(ans,s2.str);
	return strings(ans);
}

bool operator<(strings s1, strings s2){
	if(strcmp(s1.str,s2.str)<0){
		return true;
	}
	return false;
}

bool operator>(strings s1, strings s2){
	if(strcmp(s1.str,s2.str)>0){
		return true;
	}
	return false;
}

bool operator==(strings s1,strings s2){
	if(strcmp(s1.str,s2.str)==0){
		return true;
	}
	return false;
}

int main(){
	strings s1("abc");
	strings s2("defgh");

	strings s3 = s1 + s2;
	s3.display();

	if(s1 < s2){
		cout << "s1 is less than s2 " << endl;
	}
	if(s1 > s2){
		cout << "s1 is greater than s2 " << endl;
	}
	if(s1==s2){
		cout << "s1 and s2 are equal " << endl;
	}
	return 0;
}