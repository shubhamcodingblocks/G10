// Make a class named Fruit with a data member to 
// calculate the number of fruits in a basket. 
// Create two other class named Apples and Mangoes to 
// calculate the number of apples and mangoes in the basket. 
// Print the number of fruits of each type and the total 
// number of fruits in the basket.

#include<iostream>
using namespace std;

class Fruits{
public:
	int total_fruits;
	Fruits(){
		total_fruits = 0;
	}
	void addFruit(){
		total_fruits ++;
	}
	int getTotalFruits(){
		return total_fruits;
	}
};

class Apples : public Fruits{
public:
	int count_apples;
	Apples(){
		count_apples = 0;
	}
	void addApples(){
		count_apples++;
		addFruit();
	}
	int getTotalApples(){
		return count_apples;
	}
};

class Mangoes : public Fruits{
public:
	int count_mangoes;
	Mangoes(){
		count_mangoes = 0;
	}
	void addMangoes(){
		count_mangoes++;
		addFruit();
	}
	int getTotalMangoes(){
		return count_mangoes;
	}
};

int main(){
	Apples a;
	Mangoes m;
	a.addApples();
	a.addApples();
	m.addMangoes();
	m.addMangoes();
	m.addMangoes();
	cout << a.getTotalApples() << endl;
	cout << m.getTotalMangoes() << endl;
	cout << a.getTotalFruits() + m.getTotalFruits() << endl;
	return 0;
}