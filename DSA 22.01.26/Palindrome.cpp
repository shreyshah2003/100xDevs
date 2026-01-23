#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    long long temp = n;
    
    long long reverse = 0;
    
    while(n!=0)
    {
        reverse = reverse*10 + n%10;
        n = n/10;
    }
    
    if (reverse == temp)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}