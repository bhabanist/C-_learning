#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char **argv){
	if(argc<2){
	cout<<"provide more than one numbers to add"<<endl;
	return 1;
	}
	double sum=0;
	for (int i=0;i<argc;i++){
	sum=sum+atof(argv[i]); //atoi is used to convert from character to integer, atof to float
	}
	cout<<"addition of given number is: "<<sum<<endl;
	return 0;
}
