#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

double func(double x){
	return exp(-x*x)/(1+x*x);
}
double Simpson13(int a, int b, int n){
    double h,mid,ans,odd,even;
	h=double(b-a)/n;
	vector <double> x(n+1),f(n+1);
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
	int a = 0;
    int b = 10;
    int n = 10000;
	double ans=Simpson13(a,b,n);
	cout<<"Ans of the integral is "<<ans<<endl;
	return 0;
}
