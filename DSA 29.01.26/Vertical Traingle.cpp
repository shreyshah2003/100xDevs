#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int a,b;
	cin >> a;
	b = a;
	
	for(int i = 1; i<=(2*a-1); i++)
	    {
	        if(i <= a)
    	        {for(int j = 1; j<=i; j++)
    	           {
    	               if ( j == i)
    	                    {cout << "*";}
    	               else
    	                    {cout << "* ";}
    	           }
    	           cout << endl;
    	        }
    	    else
    	        {for(int j = (b-1); j>=1; j--)
    	           {
    	               if(j == b)
    	                    {cout << "*";}
    	               else
    	                    {cout << "* ";}
    	           }
    	           cout << endl;
    	           b--;
    	        }
	    }
 
}