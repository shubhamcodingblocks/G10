#include<iostream>
using namespace std;

class Student{
	char name[100];
	int student_id;
	int grades[5];
public:
	Student(char * n,int si,int * g){
		strcpy(name,n);
		student_id = si;
		for(int i=0;i<5;i++){
			grades[i] = g[i];
		}
	}
	void display_info(){
		cout<< "name: "<<name<<endl;
		cout<< "student id: "<<student_id<<endl;
		cout<< "grades: "<<endl;
		for(int i=0;i<5;i++){
			cout<< grades[i] <<" ";
		}
		cout << endl;
	}

	friend class GradeBook;
};

class GradeBook{
public:
	double computeAverage(Student s){
		int sum = 0;
		for(int i=0;i<5;i++){
			sum+=s.grades[i];
		}
		return ((double)sum/5);
	}
};

int main(){
	int g[5];
	for(int i=0;i<5;i++){
		g[i] = 49;
	}
	char a[100] = "abc";
	Student s(a,123,g);
	GradeBook gg;
	cout<<gg.computeAverage(s)<<endl;
	return 0;
}