#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long a;
    cin >> a;
 
    if (a == 0) {
        cout << 0;
        return 0;
    }
 
    while (a != 0) {
        cout << a % 10;
        a /= 10;
    }
}