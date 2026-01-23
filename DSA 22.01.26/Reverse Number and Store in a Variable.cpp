#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin >> N;
 
    long long reversed = 0;
 
    while (N > 0) {
        reversed = reversed * 10 + N % 10;  // append it to reversed
        N = N / 10;                 // remove the last digit
    }
 
    cout << reversed << "\n";
    return 0;
}