//============================================================================
// Name        : classproject1.cpp
// Author      : Havva Yılmaz
// Description : Example of inheritance
//============================================================================

#include <iostream>
#define PI 3.14

using namespace std;

class shape{
protected:
	string color;
public:
	shape(string color){
		this->color=color;
	}
	void setcolor(string color){
		this->color=color;
	}
	string getcolor(){
		return color;
	}
};
class circle:public shape{
protected:
	int *radius;
public:
	circle(int a) : shape("blue"){
		radius=new int;
		*radius=a;
		cout<<"founded radius"<<endl;
	}
	void setr(int a){
		*radius=a;
	}
	int getr(){
		return *radius;
	}
	~circle(){
		delete radius;
		cout<<"deleted radius"<<endl;
	}
};
class circle1:public circle{
public:
	circle1():circle(3){
	}
	float getarea(){
		return 3*3;
	}
};
int main() {
	circle c(4);
	cout<<"color : "<<c.getcolor()<<endl<<"radius : "<<c.getr()<<endl;
	circle1 c1;
	cout<<"color :"<<c1.getcolor()<<endl<<"radius : "<<c1.getr()<<endl<<"area : "<<c1.getarea()<<endl;

	return 0;
}
