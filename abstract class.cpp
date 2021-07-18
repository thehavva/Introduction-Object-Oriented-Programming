//============================================================================
// Name        : abstractclass.cpp
// Author      : Havva Yılmaz
// Description : Effect of virtual keyword on inheritance
//============================================================================

#include <iostream>
using namespace std;

class student{
protected:
	string name;
public:
	student(string name){
		this->name=name;
	}
	virtual void show(){
		cout<<"virtual name is "<<name<<endl;
	}
};
class school:public student{
private:
	string schoolname;
public:
	school(string schoolname,string name):student(name){
		this->schoolname=schoolname;
	}
	void show(){
		cout<<"derived show name :"<<name<<endl;
		cout<<"schhol :"<<schoolname<<endl;
	}
};
int main() {
	student *bptr;
	school an("Marmara University","Havva Yilmaz");
	cout<<"derived class via an"<<endl;
	an.show();
	cout<<endl<<"base class via an"<<endl;
	bptr=&an;
	bptr->show();
	return 0;
}
