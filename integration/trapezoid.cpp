#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

double func(double x){
    return exp(-x*x)/(1+x*x);
}

double Trapezoid(int a, int b, int n){
    double h, mid, ans;
    h = double(b-a)/n;
    vector<double> x(n+1), f(n+1);  // Correct declaration of vector<double>
    x[0] = a;
    f[0] = func(x[0]);
    for(int i = 0; i < n; i++){
        x[i+1] = x[i] + h;
        f[i+1] = func(x[i+1]);
    }

    mid = 0.0;
    for (int i = 1; i < n-1; i++){
        mid = mid + 2*f[i];
    }
    ans = (h/2.0) * (f[0] + mid + f[n]);
    return ans;
}

int main(){
    int a = 0;
    int b = 10;
    int n = 10000;
    double ans = Trapezoid(a, b, 100000);
    cout << "Ans of the integral is " << ans << endl;
    return 0;
}
