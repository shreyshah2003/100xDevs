#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int a,b;
    cin >> a;
    b = a;
    for (int i = 1; i <= a; i++)
    {
        for(int k=b-1; k>=1;k--)
        {
            cout << " ";
        }
        b--;
        for(int j = 1; j<=i ; j++)
        {
            if(j == i)
                {cout << "*";}
            else
                {cout << "* ";}
        }
        cout << endl;
    }
}