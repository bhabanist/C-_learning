#include <iostream>
#include <lapacke.h> // LAPACK header file

int main() {
    int n = 3; // The order of the matrix A
    int nrhs = 1; // Number of right-hand sides
    int lda = 3; // Leading dimension of A
    int ldb = 3; // Leading dimension of B
    int ipiv[3]; // Pivot indices
    int info; // Output variable for success/failure

    // The coefficient matrix A
    double A[3 * 3] = {
         3.0,  2.0, -1.0,
         2.0, -2.0,  4.0,
        -1.0,  0.5, -1.0
    };

    // The right-hand side matrix B
    double B[3] = {
         1.0,
        -2.0,
         0.0
    };

    // Call LAPACK function to solve the system
    info = LAPACKE_dgesv(LAPACK_ROW_MAJOR, n, nrhs, A, lda, ipiv, B, ldb);

    if (info == 0) {
        std::cout << "The solution is:\n";
        for (int i = 0; i < n; i++) {
            std::cout << "x[" << i << "] = " << B[i] << std::endl;
        }
    } else {
        std::cerr << "dgesv failed with info = " << info << std::endl;
    }

    return 0;
}
