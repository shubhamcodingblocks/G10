// Rectangle.cpp

#include<iostream>
using namespace std;

class Rectangle{
	float length;
	float width;
public:
	void setLength(float l){
		length = l;
	}
	void setWidth(float w){
		width = w;
	}
	float getParemeter(){
		return 2*(length+width);
	}
	float getArea(){
		return length*width;
	}
	void show(){
		cout << length << " " << width << endl;
	}
	int sameArea(Rectangle r2){
		return getArea() == r2.getArea();
	}
};

int main(){
	
	return 0;
}