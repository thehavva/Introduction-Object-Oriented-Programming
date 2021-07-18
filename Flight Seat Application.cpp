//============================================================================
// Name        : flight.cpp
// Author      : Havva Yılmaz
// Description : Flight Ticket Automation Project
//============================================================================

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

class airplane{
protected:
	string typeofclass;
	string fullname;
	int mounth,day;
public:
	airplane(string type,string name,int mounth,int day){
		typeofclass=type;
		fullname=name;
		this->mounth=mounth;
		this->day=day;
	}
	string gettype(){
		return typeofclass;
	}
	string getname(){
		return fullname;
	}
	int getmounth(){
			return mounth;
		}
	int getday(){
			return day;
		}

	int getamount(string typeofclass){
		if(typeofclass.compare("Business class")==0){
			return 700;
		}
		else if(typeofclass.compare("Economy class")==0){
			return 500;
		}
		else if(typeofclass.compare("First class")==0){
			return 600;
		}
	}
};

void menu(){
	cout<<"Type of seat class"<<endl<<"Business Class"<<endl<<"Economy Class"<<endl<<"First class"<<endl<<endl;
}

void result(int mounth,int day,string seat,string name,int r){
	string s;
	if(r==0){
		cout<<"This class seats are full, please choose another class."<<endl;
     	cout<<"Name of class :";
		getline(cin,s);
		seat=s;
	}
	else{
			airplane tc(seat,name,mounth,day);
		    cout<<endl<<"Congratulations, your flight has been created. Your flight information is on your ticket. Please be at the airport half an hour beforehand. Thank you for choosing us."<<endl;
			cout<<"Name and Surname : "<<tc.getname()<<endl;
		    cout<<"Type of seat : "<<tc.gettype()<<endl;
		    cout<<"Total Amount : "<<tc.getamount(seat)<<" Turkish Liras"<<endl;
		    cout<<"Time :"<<tc.getmounth()<<"/"<<tc.getday()<<"/"<<"2021"<<endl;
	}
}
int main() {
	string name,seat,answer;
	int mounth,day,r,count=1;
	srand(time(NULL));
	cout<<"Welcome Havva Airlines"<<endl;

	do{
		cout<<"Which date are you looking for tickets?"<<endl;
		cout<<"Mounth : "<<endl;
		cin>>mounth;
		cout<<"Day : "<<endl;
		cin>>day;
		r=rand()%2;
		if(r==0){
					cout<<"Unfortunately, we do not have appropriate flights on this date."<<endl;
				}
		else{
			cout<<"We have a flight on this date, please select a class."<<endl;
			menu();
			cout<<"Name of class :";
			cin>>seat;
			seat+=" class";
			cout<<"Enter your fullname :"<<endl;
			cin>>ws;
			getline(cin,name);
			do{
				r=rand()%2;
				result(mounth,day,seat,name,r);
				count++;
				if(count==3){
					cout<<"Sorry, all seats just filled, please see another flight."<<endl;
					break;
				}
			}while(r==0);
		}
		cout<<endl<<"Do you want to continue?Yes/No"<<endl;
		cin>>answer;
	}while(answer.compare("no")!=0);
	cout<<"Gule Gule"<<endl;
	return 0;
}
