#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;

    if (num==0)
        cout<<"Zero"<<endl;
    else if (num>0)
        cout<<num <<" is Positive"<<endl;
    else
        cout<<num<<" is Negative";
}