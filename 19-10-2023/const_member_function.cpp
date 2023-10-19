#include<iostream>
using namespace std;

class Employee{
	int balance;
public:
	Employee(int b){
		balance = b;
	}
	void display() const{
		cout << "balance: "<< balance <<endl;
	}
	void deposit(int amt){
		balance += amt;
	}
	void withdrawl(int amt){
		balance -= amt;
	}
};

int main(){
	Employee e(1000000);
	e.display();
	e.withdrawl(101);
	e.display();
	return 0;
}