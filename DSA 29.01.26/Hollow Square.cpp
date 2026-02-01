#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int a,b;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for(int j = a; j >=1 ; j--)
        {
            if (i == 1 or i == a or j == 1 or j == a)
                {cout << "*";}
            else
                {cout << " ";}
        }
        cout << endl;
        
    }
 
}