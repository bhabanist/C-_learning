// This is a program to test wheather you are allowed to a party or not. cheak will be done below 18 years old.
#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if (age <18){
        cout<<"You are not alowed in party"<<endl;
    }
    else if(age ==18){
        cout<<"You need a kid pass to enter in party"<<endl;
    }
    else{
        cout<<"Welcome to the party"<<endl;
    }
    return 0;
}