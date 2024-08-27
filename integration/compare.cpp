#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include <fstream>

using namespace std;

double func(double x){
	return exp(-x*x)/(1+x*x);
}

double Trapezoid(int a, int b, int n){
    double h,mid,ans;
	h=double(b-a)/n;
	vector <double> x(n),f(n);
	x[0]=a;
	f[0]=func(x[0]);
	for(int i=0;i<n;i++){
	x[i+1]=x[i]+h;
	f[i+1]=func(x[i+1]);
	}
	
	mid=0.0;
	for (int i=1;i<n-1;i++){
	mid=mid+2*f[i];
	}
	ans=(h/2.0)*(f[0]+mid+f[n]);
	return ans;
}

double Simpson13(int a, int b, int n){
    double h,mid,ans,odd,even;
	h=double(b-a)/n;
	vector <double> x(n),f(n);
	x[0]=a;
	f[0]=func(x[0]);
	for(int i=0;i<n;i++){
	x[i+1]=x[i]+h;
	f[i+1]=func(x[i+1]);
	}
	
	odd=0.0;
    even=0.0;
	for (int i=1;i<n-1;i++){
        if (i % 2==0)
        {
            even=even+2*f[i];
        }
        else if (i%2!=0){
            odd=odd+4*f[i];
        }
	}
	ans=(h/3.0)*(f[0]+odd+even+f[n]);
    return ans;
}

int main(){
	ofstream outfile("compare.txt");
    vector<int> iter={10,40,80,100,1000,10000,100000,1000000,10000000};
    int a=0;
    int b=10;
	for (int j = 0; j <iter.size(); j++)
	{
		outfile<<setw(8)<<iter[j]<<" "<<Trapezoid(a,b,iter[j])<<" "<<Simpson13(a,b,iter[j])<<endl;
	}
	
    return 0;
}
