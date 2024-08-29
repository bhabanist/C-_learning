#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<double> arr;
    int len = 300;
    double step = 1;
    // Create an array with values ranging from -len to len with a step of 0.5
    for (double val = -len; val <= len; val += step) {
        arr.push_back(val);
    }
    double M=0.0;
       
    // Loop through all combinations of i, j, k
    for (double i : arr) {
        for (double j : arr) {
            for (double k : arr) {
                // Exclude the (0, 0, 0) case
                if (!(i == 0 && j == 0 && k == 0)) {
                    double c = sqrt(i * i + j * j + k * k);
                    int A = (i + j + k);  
                    // Check if A is even or odd and adjust M accordingly
                    if (A % 2 == 0) {
                        M += 1/c;
                    }else {
                        M -= (1.0/c);
                    }
                }
            }
        }
    }

    cout << "Madelung constant approximated with size " << len << " is " << M << endl;

    return 0;
}
