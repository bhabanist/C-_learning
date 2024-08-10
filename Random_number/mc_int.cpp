// This is a code to integration using monte carlo method. integration is exp(-x^2) from 0 to 1
#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<cmath>

using namespace std;

double func(double x){
    return  exp(-x*x);
}

int main(){

    double a,b,n,r,x,y,f,ans;
    a=0.0;
    b=1.0;
    n=10000000;
    int seed=5917;
    srand(seed);
    f=0.0;
    for (int i = 0; i < n; i++)
    {
        x=a+(double)rand()/RAND_MAX*(b-a);
        
        f=f+func(x);
        
    }
   ans= (b-a)*f/n;
    cout<<fixed<<setprecision(5)<<"Approximated value of integration is: "<<ans<<endl;
    return 0;
}