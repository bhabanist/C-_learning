#include <iostream>
#include <vector>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Function to compute the longest prefix which is also suffix array
void computeLPSArray(string pat, int M, vector<int>& lps) {
    int length = 0; // length of the previous longest prefix suffix
    lps[0] = 0; // lps[0] is always 0

    int i = 1;
    while (i < M) {
        if (pat[i] == pat[length]) {
            length++;
            lps[i] = length;
            i++;
        } else { // (pat[i] != pat[length])
            if (length != 0) {
                length = lps[length - 1];
            } else { // if (length == 0)
                lps[i] = 0;
                i++;
            }
        }
    }
}

// Function to implement the KMP algorithm
void KMPSearch(string pat, string txt) {
    int M = pat.length();
    int N = txt.length();

    vector<int> lps(M);
    computeLPSArray(pat, M, lps);

    int i = 0; // index for txt[]
    int j = 0; // index for pat[]
    while (i < N) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }

        if (j == M) {
            cout << "Found pattern at index " << i - j << endl;
            j = lps[j - 1];
        } else if (i < N && pat[j] != txt[i]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
}

int main() {
    string txt = "ABABDABACDABABCABAB";
    string pat = "ABABCABAB";

    auto start = high_resolution_clock::now();

    KMPSearch(pat, txt);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;

    return 0;
}
