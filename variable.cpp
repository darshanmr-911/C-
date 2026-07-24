//C++ VARIABLES
// A variable is a named storage that our programs can manipulate. Each variable in C++ has a specific type, which determines the size and layout of the variable's memory; the range of values that can be stored within that memory; and the set of operations that can be applied to the variable.
//SYNTAX
// type variable_name = value;  

// #include<iostream>
// using namespace std;

int main()
{
    cout << "Hello World!" <<endl;
    cout << " This is my first C++ program" <<endl;
    cout << "I am learnig C++ programming variables" << endl;
    cout << "Thank you " <<endl;
    return 0;
}


#include<iostream>
using namespace std;

int main()
{
    string name = "John"; // string variable
    int age = 25; // integer variable
    double height = 5.9; // double variable

    cout << "My self " << name <<endl;
    cout << "My age is " << age <<"Years Old"<<endl;
    cout << "My height is " << height <<endl;
    return 0;   
}