#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,m;
    cin >> n >> m;
    long long ans = 1;
    int i=1;
    while(i<=m)
    {
        ans = ans * n;
        i++;
    }
    cout << ans;
}