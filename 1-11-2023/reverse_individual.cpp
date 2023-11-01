#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	vector<string> s;
	string temp;
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			s.push_back(temp);
			temp.clear();
			continue;
		}
		temp+=str[i];
	}
	s.push_back(temp);
	for(int i=0;i<s.size();i++){
		reverse(s[i].begin(),s[i].end());
	}
	for(int i=0;i<s.size();i++){
		cout << s[i] << " ";
	}
	return 0;
}