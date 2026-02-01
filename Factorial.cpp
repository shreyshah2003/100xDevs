#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int fact = 1;
    int factorial(int b)
    {
        for (int i = 1; i <= b; i++)
        {
            fact = fact * i;
        }
        return fact;
    }
    cout << factorial(a) << endl;
}
