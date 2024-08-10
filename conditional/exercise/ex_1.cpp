#include<iostream>
using namespace std;

int main(){
    int num,sum;
    cout<<"Enter your number"<<endl;
    cin>>num;
    sum=0;
    for (int i = 0; i <=num; i++)
    {   
        sum=sum+i;
    }
    cout<<"Sum of the numbers up to "<<num<<" is: "<<sum<<endl;
    return 0;
}