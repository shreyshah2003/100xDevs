
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    int p = 0;
    int t = 0;
    int e = 0;
    int o = 0;
 
    cin >> n;
    while (n > 0)
    {
        long long i;   // declare i for each input
        cin >> i;
 
        if (i > 0)
            p++;
 
        if (i < 0)
            t++;
 
        if (i % 2 == 0)
            e++;
        else
            o++;
 
        n--;   // decrement n to avoid infinite loop
    }
 
    // print results
    cout << p << endl << t << endl << e << endl << o;
    return 0;
}
