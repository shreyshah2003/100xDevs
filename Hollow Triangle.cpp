#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a;
    cin >> a;
    int b = a;
    
    for(int i = 1; i<=a; i++)
        {
            for(int j = b-1; j >=1; j--)
                {
                    cout << " ";    
                }
            b--;
            
            for(int j = 1; j <= i; j++)
                {   
                    if (i == 1 or i == a or j == 1 or j == i)
                    {
                        cout << "* ";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
            cout << endl;
        }       
 
}
