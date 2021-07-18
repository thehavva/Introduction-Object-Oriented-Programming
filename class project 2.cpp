//============================================================================
// Name        : classproject2.cpp
// Author      : Havva Yılmaz
// Description : Virtual function
//============================================================================

#include <iostream>
using namespace std;

// CPP program to illustrate
// concept of Virtual Functions


class base
{
public:
    virtual void print ()
    { cout<< "print base class" <<endl; }

    void show ()
    { cout<< "show base class" <<endl; }
};

class derived:public base
{
public:
    void print ()
    { cout<< "print derived class" <<endl; }

    void show ()
    { cout<< "show derived class" <<endl; }
};

int main()
{
    base *bptr;
    derived d;
    bptr = &d;

    //virtual function, binded at runtime (late binding)
    bptr->print(); //Derived
    // Non-virtual function, binded at compile time (early bindig)
    bptr->show(); //Base
    d.print();
    d.show();
    return 0;
}
