#include<iostream>
#include<iomanip>
using namespace std;
// this is extension of the programfile add_userinput.cpp
// setw is coming form iomainp header file which manipulate the print value 
int main(){
    cout<<"This is a program for addition \n";
    double num1,num2,sum,squar1,squar2;
    cout<<"Enter the first number: \n";
    cin>>num1;
    cout<<"Enter the second number: \n";
    cin>>num2;
    sum= num1+num2;
    squar1=num1*num1;
    squar2=num1*num2;
    cout<<"Added number is: "<<sum<< endl;
    cout<<"square of first number is: "<<squar1<< endl;
    cout<<"square of second number is: "<<squar2<< endl;
    cout<<"Added number with setw is: "<<setw(5)<<sum<< endl;
    cout<<"square of first number with setw is: "<<setw(5)<<squar1<< endl;
    cout<<"square of second number with setw is: "<<setw(5)<<squar2<< endl;


    return 0;
}