#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

// Function to generate a normally distributed random number using Box-Muller transform
double normal_random() {
    static const double PI = 3.14159265358979323846;
    double u1 = (double)rand() / RAND_MAX;
    double u2 = (double)rand() / RAND_MAX;
    double z0 = sqrt(-2.0 * log(u1)) * cos(2.0 * PI * u2);
    return z0;
}

// Function to compute exp(-x^2)
double func(double x) {
    return exp(-x * x);
}

int main() {
    double a, b, n, x, f, ans;
    a = 0.0;
    b = 1.0;
    n = 10000000;
    int seed = 5917;
    srand(seed);
    f = 0.0;

    for (int i = 0; i < n; i++) {
        // Generate a normal random number
        x = normal_random();
        
        // Normalize x to the interval [a, b] if needed
        // In a Monte Carlo integration, typically we use uniform distribution,
        // so this line is just for demonstration.
        x = a + (double)rand() / RAND_MAX * (b - a);

        // Compute the function value
        f = f + func(x);
    }

    ans = (b - a) * f / n;
    cout << fixed << setprecision(5) << "Approximated value of integration is: " << ans << endl;

    return 0;
}
