// VectorAndIterator.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//This program is related to how we can use vector and iterator key word with together.

#include <iostream>
#include <ctime> //for random numbers
#include <vector> //for vector key word
#include <string> //for getline function
#include  <stdlib.h> //for rand function
using namespace std;

//this is our class
class myvectors {
public:
	int num;
	string name;
	myvectors(int num, string name) {
		this->num = num;
		this->name = name;
	}
};

int main() {
	vector<myvectors>v; //definition of vector
	srand(time(0)); //for producing random variable
	int i, size, number;
	string name;
	cout << "Enter size of vector : " << endl;
	cin >> size;
	for (i = 0; i < size; i++) {
		number = 1 + rand() % 100;
		cout << "Enter name : ";
		cin >> ws; //this is required to empty cin function and also getline function working better
		getline(cin, name);
		myvectors mv(number,name);
		v.push_back(mv);
	}
	cout << endl << "----------Class----------" << endl;
	vector<myvectors>::iterator p = v.begin();
	while (p != v.end()) {
		cout << "Name : " << p->name << "\tScore : " << p->num << endl;
		p++;
	}
	return 0;
}
