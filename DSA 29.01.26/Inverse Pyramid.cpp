#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int a,b;
    cin >> a;
    b = a;
    for (int i = 1; i <= a; i++)
    {
        for(int j = b; j >=1 ; j--)
        {
            cout << "*";
        }
        cout << endl;
        b--;
        
    }
 
}