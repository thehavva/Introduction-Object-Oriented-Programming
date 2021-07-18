//============================================================================
// Name        : inheritance2.cpp
// Author      : Havva Yılmaz
// Description : Inheritance Project
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class publication{
protected:
	string title;
	float price;
public:
	publication(string t,float p){
		title=t;
		price=p;
	}
	publication(string t){
		title=t;
	}
	void settitle(string name){
		title=name;
	}
	float getprice(){
		return price;
	}
	string getname(){
		return title;
	}
	~publication(){
		title="";
		price=0.0;
		cout<<"publication is destroyed"<<endl;
	}

};
class paperbook:public publication{
	int page;
public:
	paperbook(int p,string t,float per):publication(t,per){
		page=p;
	}
	int getpage(){
		return page;
	}
	float getamount(){
		return page*publication::price;
	}
};
class tape:public publication{
private:
	float minute;
	float value;
public:
	tape(string n,float m,float v):publication(n){
		minute=m;
		value=v;
	}
	float getvalue(){
		return value;
	}
	float getminute(){
		return minute;
	}
	float getamount2(){
		return minute*value;
	}
};
int main() {
	string choice,name;
	float price,page,m,val;
	cout<<"Type of publication : \nPaperbook\nTape"<<endl;
	cout<<"Choose type of publication "<<endl;
    getline(cin,choice);
    if(choice.compare("paperbook")==0){
    	cout<<"Enter your name : ";
    	getline(cin,name);
    	cout<<endl<<"Enter your each page of price and number of page :";
    	cin>>price>>page;
    	paperbook p(page,name,price);
    	cout<<"----------Publication----------"<<endl<<"Type of publication : "<<p.getname()<<endl<<"Price : "<<p.getprice()<<endl;
    	cout<<"Page : "<<p.getpage()<<endl<<"Total Amount of this book : "<<p.getamount()<<endl;
    }
    else{
    	cin>>ws;
    	cout<<"Enter your name : ";
    	getline(cin,name);
    	cout<<endl<<"Enter each of value time as minute and each of tage value : ";
    	cin>>m>>val;
    	tape t(name,m,val);
    	cout<<"Publication"<<endl<<"Type of publication : "<<t.getname()<<endl<<"Minute : "<<t.getminute()<<endl;
    	cout<<"Value of per minute : "<<t.getvalue()<<endl<<"Total Amount of this book : "<<t.getamount2()<<endl;
    }

	return 0;
}
