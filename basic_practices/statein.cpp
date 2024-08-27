#include<iostream>
#include<string>

using namespace std;
int main(){
	string name;
	int age;
	cout<<"Enter your full name and age"<<endl;
	getline(cin,name);//getline helps us to take full string with spaces.
	cin>>age;
	cout<<"HI! "<<name<<" you are "<<age<<" years old!"<<endl;
	return 0;


}
