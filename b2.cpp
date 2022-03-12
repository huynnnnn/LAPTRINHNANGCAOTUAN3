#include<bits/stdc++.h>
#define For(i, x, y) for(int i = x; i <= y; i++)
#define Forn(i, x, y) for(int i = x; i >= y; i--)
using namespace std;
int main()
{
    int n;
    cin >> n;
    double a[n + 2];
    For(i, 1, n)
        cin >> a[i];
    sort(a + 1, a + n + 1, greater<double>());
    For(i, 1, n)
        cout << setprecision(2) << fixed << a[i] << ' ';
}
