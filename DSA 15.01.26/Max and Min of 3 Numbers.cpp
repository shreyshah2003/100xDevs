
#include <iostream>
using namespace std;
 
int main() 
{
    int a, b, c;
    cin >> a >> b >> c;
 
    if (a >= b && a >= c)
    {
        cout << "Min = " << (b <= c ? b : c) << endl;
        cout << "Max = " << a << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << "Min = " << (a <= c ? a : c) << endl;
        cout << "Max = " << b << endl;
    }
    else
    {
        cout << "Min = " << (a <= b ? a : b) << endl;
        cout << "Max = " << c << endl;
    }
}
