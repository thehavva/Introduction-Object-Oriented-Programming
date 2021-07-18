//============================================================================
// Name        : encapsilation.cpp
// Author      : Havva Yılmaz
// Description : Encapsilation with pointar variable
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class time{
private:
	int *hours;
	int *minute;
public:
	time(int ,int );
	void sethours(int h){
		*hours=h;
	}
	void setminute(int m){
		*minute=m;
	}
	int gethours();
	int getminute();
	~time();
};
time::time(int h,int m){
	hours=new int;
	minute=new int;
	*hours=h;
	*minute=m;
	cout<<"founded"<<endl;
}
int time::gethours(){
	return (*hours);
}
int time::getminute(){
	return (*minute);
}
time::~time(){
	delete hours;
	delete minute;
	cout<<"destroyed"<<endl;
}
int main() {
	time *t1;
	t1=new time(2,25);
	cout<<"hours :"<<t1->gethours()<<endl<<"minute :"<<t1->getminute()<<endl;
	delete t1;
	time *t2;
	t2=new time(3,6);
	cout<<"hours :"<<t2->gethours()<<endl<<"minute :"<<t2->getminute()<<endl;
	delete t2;

	return 0;
}
