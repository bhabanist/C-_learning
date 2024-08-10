#include<iostream>
using namespace std;

int main(){
    double a1,a2,a3;
    cout<<"Give first number"<<endl;
    cin>>a1;
    cout<<"Give second number"<<endl;
    cin>>a2;
    cout<<"Give third number"<<endl;
    cin>>a3;
    if (a1 > a2&&a1>a3){
        cout<<a1<<" is the largest number"<<endl;
    }
    else if(a2 > a3){
        cout<<a2<<" is the largest number"<<endl;
    }
    else{
        cout<<a3<<" is the largest number"<<endl;
    }
}