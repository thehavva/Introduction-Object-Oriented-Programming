//============================================================================
// Name        : inheritanceandstring.cpp
// Author      : Havva Yılmaz
// Description : Inheritance with string processing
//============================================================================

#include <iostream>
using namespace std;

class strapp{
private:
	string s1;
	string s2;
public:
	strapp(string s1,string s2){
		this->s1=s1;
		this->s2=s2;
	}
	string gets1(){
		return s1;
	}
	string gets2(){
		return s2;
	}
	int found(string s1,string s2){
		int i=s1.find(s2);
		int count=0;
		while(i!=-1){
			count++;
			i=s1.find(s2,i+1);
		}
		return count;
	}
};
int main() {
	string str1,str2;
	cout<<"Main string :";
	getline(cin,str1);
	cout<<"Searched string :";
	getline(cin,str2);
	strapp str(str1,str2);
	cout<<"Main string : "<<str.gets1()<<endl;
	cout<<"Searched string : "<<str.gets2()<<endl;
	cout<<"String2 occur at String1 "<<str.found(str1, str2)<<" times."<<endl;
	return 0;
}
