#include <iostream>
using namespace std;

int main()
{
    const int marks=35;
    int obtained_marks;
    cout << "Enter the your marks: "<<endl;
    cin>> obtained_marks;
    if (obtained_marks >= marks)
    {
        cout << "You have passed the exam." << endl;
    }
    else
    {
        cout << "You have failed the exam." << endl;
    }
    return 0;
}