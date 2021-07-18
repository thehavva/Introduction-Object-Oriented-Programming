//============================================================================
// Name        : Function.cpp
// Author      : Havva Yılmaz
// Description : Overloading operator with strings
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

// Class to implement operator overloading
// function for concatenating the strings
class AddString {

public:
    // Class object of string
    char s1[25];

    AddString(){}
    // Parametrized Constructor
    AddString(char str1[])
    {
        // Initialize the string to class object
        strcpy(this->s1, str1);
    }

    //str3 = str1 + str2;
    AddString operator + (AddString &obj){
        AddString res;
        strcat(this->s1, obj.s1);
        strcpy(res.s1, this->s1);
        return res;
    }
};

int main(){
    char str1[]="Marmara ";
    char str2[]="University";
    AddString a1(str1);
    AddString a2(str2);
    AddString a3;
    a3 = a1 + a2;
    cout << a3.s1 << endl;
    return 0;
}
