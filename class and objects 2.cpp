//============================================================================
// Name        : classandobjects3.cpp
// Author      : Havva Yılmaz
// Description : Example of interitance
//============================================================================

#include <iostream>
#include<cstring>
using namespace std;

class business{
protected:
	string name;
	bool permission;
public:
	business(string ename,bool per):name(ename),permission(per){}
	bool getinfo(){
		return permission;
	}
	string getname(){
		return name;
	}
};

class employee:public business{
private:
	double salary;
public:
	employee(double s,string sname,bool per): salary(s),business(sname,per){}
	double getsalary(){
		return salary;
	}
	double getinformation(){
		int a=getinfo();
		if(a==0){
			return 0.0;
		}
		else{
			return (24-(salary/150));
		}
	}
};
int main(){
	employee e(2850,"Sercan İpekçioğlu",true);
	employee e2(3450,"Enes Meral",false);
	cout<<"Name :"<<e.getname()<<endl;
	cout<<"Has permission been used? :"<<bool(e.getinfo())<<endl;
	cout<<"Salary :"<<e.getsalary()<<endl;
	cout<<"Number of permission date :"<<e.getinformation()<<endl<<endl;
	cout<<"Name :"<<e2.getname()<<endl;
	cout<<"Has permission been used? :"<<bool(e2.getinfo())<<endl;
	cout<<"Salary :"<<e2.getsalary()<<endl;
	cout<<"Number of permission date :"<<e2.getinformation()<<endl<<endl;
	return 0;
}
