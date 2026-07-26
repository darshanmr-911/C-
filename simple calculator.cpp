#include<iostream>
using namespace std;

int main()
{
    float a,b;
    char op;
    cout<<"Enter first number:"<<endl;
    cin>>a;

    cout<<"Enter the second number"<<endl;
    cin>>b;

    cout<<"Select the opearator (+,-,*,/)"<<endl;
    cin>>op;

    switch(op)
    {
        case '+':
            cout<<"Result = "<< a + b<<endl;
            break;
        case '-':
            cout<<"Result = "<< a - b << endl;
            break;
        case '*':
            cout<<"Result = "<< a * b << endl;
            break;
        case '/':
            if (b!=0)
                cout<<"Result = "<< a / b << endl;
            else
                cout<<"Not Divide";
            break;
        default:
            cout<<"Invaild choice";

    }
    return 0;
}