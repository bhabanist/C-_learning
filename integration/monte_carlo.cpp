#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;
double func(double x){
	return exp(-x*x)/(1+x*x);
}

int main(){
    int a=0;
    int b=10;
    int n= 1000000;
    double f=0.0;
    for (int i = 0; i < n; i++)
    {
       double x=a+(double)rand()/RAND_MAX*(b-a);
       f=f+func(x);
    }
    double ans=double(b-a)/n*f;
    cout<<ans<<endl;
    return 0;
}
