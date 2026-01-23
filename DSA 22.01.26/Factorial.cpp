#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    long long i =1;
    long long a = 1;
    
    while(i<=n)
    {
        a *= i;
        i++;
    }
    cout << a;
}