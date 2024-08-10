// This is a code to estimate pi using monte carlo method.
#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){

    double a,b,n,r,x,y,sq_c,circ_c,pi;
    a=0.0;
    b=1.0;
    n=10000000;
    sq_c=0.0,circ_c=0.0;
    int seed=5917;
    srand(seed);
    for (int i = 0; i < n; i++)
    {
        x=a+(double)rand()/RAND_MAX*(b-a);
        y=a+(double)rand()/RAND_MAX*(b-a);
        r=pow(x,2)+pow(y,2);
        if(r<=1){
            circ_c++;
        }
        sq_c++;
    }
    pi=4*(circ_c/sq_c);
    cout<<fixed<<setprecision(5)<<"Approximated value of pi is: "<<pi<<endl;
    return 0;
}