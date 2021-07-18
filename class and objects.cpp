//============================================================================
// Name        : cpp.cpp
// Author      : Havva Yılmaz
// Description : Creating a class with constructor and destructor
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class oto{
private:
	string model;
	int age;
public:
	oto();
	oto(string,int);
	void setname(string s){
		model=s;
	}
	void setage(int a){
		age=a;
	}
	string getname();
	int getage();
	~oto();
};
oto::oto(){
	model='\0';
	age=0;
}
oto::oto(string s,int a){
	model=s;
	age=a;
	cout<<"it was founded"<<endl;
}
string oto::getname(){
	return model;
}
int oto::getage(){
	return age;
}
oto::~oto(){
	age=0;
	cout<<"it was destroyed"<<endl;
}
int main() {
	oto o1("BMW",2019);
	cout<<"name : "<<o1.getname()<<endl;
	cout<<"age : "<<o1.getage()<<endl;
	cout<<"another way "<<endl;
	oto o2;
	o2.setname("Mercedes");
	o2.setage(2020);
	cout<<"name : "<<o2.getname()<<endl;
	cout<<"age : "<<o2.getage()<<endl;
	return 0;
}
